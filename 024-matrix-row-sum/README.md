# Challenge 024: Matrix Row Sum

## Problem Statement

Write a C++ program that reads a matrix of integers and prints the sum of each row.

## Requirements

- First read two integers `r` and `c` (1 ≤ r, c ≤ 100) — the number of rows and columns.
- Then read `r × c` integers into a 2D array.
- For each row, print the sum of its elements.

## Example

### Input
```
3 4
1 2 3 4
5 6 7 8
9 10 11 12
```
### Output
```
10
26
42
```

## Notes

- Use nested loops to read and process the matrix.
- Bonus: Wrap the row sum calculation into a function like  
  `void printRowSums(int matrix[][100], int r, int c)`.