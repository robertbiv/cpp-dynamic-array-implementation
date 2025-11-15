# C++ Birthday Guessing Game
A C++ program that can determine your birthday (day of the month) by asking only 5 yes/no questions.

## Description

This program implements a clever algorithm based on binary representation to guess any day of the month (1-31) by asking whether your birthday appears in 5 different sets of numbers. The algorithm works by representing each number as a sum of powers of 2 (binary representation).

## How It Works

The program uses 5 sets of numbers, where each set corresponds to a specific bit position in binary:
- **Set 1**: Contains numbers with bit 0 set (adds 1)
- **Set 2**: Contains numbers with bit 1 set (adds 2)
- **Set 3**: Contains numbers with bit 2 set (adds 4)
- **Set 4**: Contains numbers with bit 3 set (adds 8)
- **Set 5**: Contains numbers with bit 4 set (adds 16)

By asking which sets contain your birthday, the program reconstructs the number by adding the corresponding values.

### Example
If your birthday is the 23rd:
- 23 in binary is 10111
- This means: 16 + 4 + 2 + 1 = 23
- So 23 appears in Sets 1, 2, 3, and 5, but not Set 4

## Compilation

To compile the program using g++:

```bash
g++ -o homework3 homework3.cpp
```

Or using any C++ compiler:

```bash
c++ -o homework3 homework3.cpp
```

## Usage

Run the compiled program:

```bash
./homework3
```

The program will present 5 sets of numbers and ask if your birthday appears in each set. Answer with:
- `Y` or `y` for Yes
- `N` or `n` for No

After all 5 questions, the program will reveal the day of your birthday.

## Example Session

```
Is your birthday in Set1 ?
 1  3  5  7
 9 11 13 15
17 19 21 23
25 27 29 31
Enter N/n for No and Y/y for Yes: y

Is your birthday in Set2 ?
 2  3  6  7
10 11 14 15
18 19 22 23
26 27 30 31
Enter N/n for No and Y/y for Yes: y

Is your birthday in Set3?
4   5  6  7
12 13 14 15
20 21 22 23
28 29 30 31
Enter N/n for No and Y/y for Yes: y

Is your birthday in Set4?
8   9 10 11
12 13 14 15
24 25 26 27
28 29 30 31
Enter N/n for No and Y/y for Yes: n

Is your birthday in Set5 ?
16 17 18 19
20 21 22 23
24 25 26 27
28 29 30 31
Enter N/n for No and Y/y for Yes: y

The day of your birthday is 23.
```

## Requirements

- C++ compiler (g++, clang++, MSVC, etc.)
- C++11 or later (though the code uses basic C++ features)

## Author

- **Name**: Robert Bennethum
- **Email**: rmb6287@psu.edu
- **Course**: CMPSC 121
- **Project**: Homework 3

## License

This is an educational project created for CMPSC 121 coursework.
