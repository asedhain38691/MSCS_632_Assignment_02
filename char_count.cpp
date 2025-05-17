#include <iostream>
#include <fstream>

int main() {
    const char* filename = "input.txt";
    const char target = 'a';
    const std::size_t buffer_size = 4096;
    char* buffer = new char[buffer_size];
    int count = 0;

    std::ifstream file(filename, std::ios::binary);
    if (!file) {
        std::cerr << "Failed to open file.\n";
        delete[] buffer;
        return 1;
    }

    while (file) {
        file.read(buffer, buffer_size);
        std::streamsize bytes_read = file.gcount();
        for (std::streamsize i = 0; i < bytes_read; ++i) {
            if (buffer[i] == target) {
                count++;
            }
        }
    }

    delete[] buffer;
    std::cout << "Occurrences of '" << target << "': " << count << std::endl;
    return 0;
}

