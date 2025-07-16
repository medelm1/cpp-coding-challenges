# Challenge 017: Count Unique Digits

## Problem Statement

Write a C++ program that **counts the number of unique digits** in a given non-negative integer.

## Requirements

- Read a single non-negative integer `n` (0 ≤ n ≤ 10^9).
- Count how many **distinct digits** are in `n`.
- Output the count.

## Example

### Input
```
998877
```
### Ouput
```
3
```

### Explanation:
Digits in the number: 9, 8, 7, 7, 8, 9  
Unique digits: 7, 8, 9 → Total = 3
---
### Input
```
1234567890
```
### Ouput
```
10
```

## Notes

- You may use an array of size 10 to track digit occurrences.
- Bonus: Extract the logic into a function:  
  `int countUniqueDigits(int n);`
