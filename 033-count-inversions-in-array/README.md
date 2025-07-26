# Challenge 033 - Count Inversions in Array

## Problem Statement

Write a C++ program to **count the number of inversions** in an array.

An **inversion** is a pair of elements (`a[i], a[j])` such that `i < j` and `a[i] > a[j]`).

## Requirements

- Accept the size and elements of the array from the user.
- Use an **efficient** algorithm (recommended: modified merge sort).
- Display the total number of inversions in the array.

## Example

### Input
```
Enter array size: 5  
Enter array elements: 2 4 1 3 5
```
### Output
```
Number of inversions: 3
```
_Explanation: Inversions are (2,1), (4,1), and (4,3)._