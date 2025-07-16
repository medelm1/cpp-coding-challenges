# Challenge 012: Array Average Calculator

## Problem Statement

Write a C++ program that reads a list of integers into an array and calculates their **average** (mean value).

The program should also display the **minimum** and **maximum** values from the array.

## Requirements

- Read the number of elements `n` (1 ≤ n ≤ 100).
- Then read `n` integers into an array.
- Calculate:
  - The **average** (as a `double`)
  - The **minimum** value
  - The **maximum** value
- Output the results clearly with labels.

## Example

### Input
```
5
12 7 20 3 15
```

### Output
```
Average: 11.4
Minimum: 3
Maximum: 20
```

## Notes

- Use a loop to read elements into an array.
- Keep track of the sum, min, and max as you go.
- Bonus: Wrap the logic into a function like  
  `void analyzeArray(const int arr[], int n)`.