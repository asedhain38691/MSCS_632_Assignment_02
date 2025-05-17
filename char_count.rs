use std::fs::File;
use std::io::{BufReader, Read};

fn main() {
    let filename = "input.txt";
    let target = b'a';
    let file = File::open(filename).expect("Failed to open file");
    let mut reader = BufReader::new(file);

    let mut buffer = [0; 4096];
    let mut count = 0;

    loop {
        let bytes_read = reader.read(&mut buffer).expect("Failed to read bytes");
        if bytes_read == 0 {
            break;
        }
        count += buffer[..bytes_read]
            .iter()
            .filter(|&&byte| byte == target)
            .count();
    }

    println!("Occurrences of '{}': {}", target as char, count);
}

