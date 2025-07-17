# Challenge 019: Decimal to Binary

## Problem Statement

Write a C++ program that converts a given **non-negative integer** to its **binary representation** using only arithmetic (no built-in conversion functions like `bitset`, `std::bit_cast`, etc.).

## Requirements

- Input: An integer `n` such that `0 ≤ n ≤ 10^9`.
- Output: A string representing the binary equivalent of `n`.

## Example

### Input
```
5
```
### Output
```
101
```

### Input
```
0
```
### Output
```
0
```

### Input
```
19
```
### Output
```
10011
```

## Notes

- You can use a loop and remainder operation `%` to build the binary digits.
- Optionally, store the binary digits in reverse and reverse them at the end.
- Bonus: Write a helper function:
  ```cpp
  string decimalToBinary(int n);
