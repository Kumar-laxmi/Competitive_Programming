// Enter your code here. Read input from STDIN. Print output to STDOUT
use std::io;

fn main() {
    let mut input_t = String::new();
    io::stdin()
        .read_line(&mut input_t)
        .expect("Failed to read line");
    
    let mut t: i32 = input_t
        .trim()
        .parse()
        .expect("Input not an input");
    
    while t > 0 {
        let mut val = String::new();
        std::io::stdin().read_line (&mut val).expect("Failed to read line");
        let mut substr_iter = val.split_whitespace();
        let mut next_or_default = |def| -> i32 {
          substr_iter.next().unwrap_or(def)
                     .parse().expect("Input is not a number")
        };
        let mut _n = next_or_default("3");
        let mut k = next_or_default("3");
        
        
        let mut numbers = String::new();
        io::stdin()
            .read_line(&mut numbers)
            .expect("Failed to read line");
        
        let numbers: Vec<i32> = numbers
            .split_whitespace()
            .map(|s| s.parse().expect("parse error"))
            .collect();
        
        for num in numbers {
            if num <= k {
                print!("1");
                k -= num;
            }
            else {
                print!("0");
            }
        }
        
        println!("");
        t -= 1;
    }
}
