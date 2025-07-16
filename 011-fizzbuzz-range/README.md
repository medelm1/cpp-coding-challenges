# Challenge 011: FizzBuzz Range

## Problem Statement

Write a C++ program that prints numbers from **1 to N** (inclusive), following these rules:

- If a number is divisible by **3**, print `"Fizz"`.
- If divisible by **5**, print `"Buzz"`.
- If divisible by **both 3 and 5**, print `"FizzBuzz"`.
- Otherwise, print the number itself.

This classic problem is a common introduction to conditional logic and clean output formatting.

## Requirements

- Read an integer `N` from the user.
- Loop from 1 to `N`, applying the rules above.
- Print each result on a **new line**.

## Example

### Input
```
15
```

### Output
```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

## Notes

- You must use conditional statements (`if`/`else`).
- Bonus: Wrap the logic into a function `void fizzBuzz(int n)`.