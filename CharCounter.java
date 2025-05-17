import java.io.*;

public class CharCounter {
    public static void main(String[] args) {
        String filename = "input.txt";
        char target = 'a';
        int count = 0;

        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
            int ch;
            while ((ch = reader.read()) != -1) {
                if ((char) ch == target) {
                    count++;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.println("Occurrences of '" + target + "': " + count);
    }
}

