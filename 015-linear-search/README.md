# Challenge 015: Linear Search

## Problem Statement

Write a C++ program that performs a **linear search** to find a specific number in an array.

The program should read a list of integers and a **target value**, then return the index of the target if found, or print a message if it’s not found.

## Requirements

- First read an integer `n` (number of elements, 1 ≤ n ≤ 100).
- Then read `n` integers into an array.
- Finally, read the **target number** to search for.
- Perform a **linear search** to find the **first occurrence** of the target.
- Output the index (0-based) if found, or `"Not found"` otherwise.

## Example

### Input
```
5
4 2 7 1 9
7
```
### Output
```
Found at index: 2
```
---
### Input
```
4
10 20 30 40
25
```
### Output
```
Not found
```

## Notes

- Bonus: Wrap the logic in a function like  
  `int linearSearch(const int arr[], int n, int target)`  
  which returns the index or -1.
- Optional: Add input validation for array size.