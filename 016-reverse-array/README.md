# Challenge 016: Reverse Array

## Problem Statement

Write a C++ program that **reverses the contents** of an array.

The program should read a list of integers from the user, reverse the array in-place, and then display the reversed array.

## Requirements

- First read an integer `n` (1 ≤ n ≤ 100), the number of elements.
- Then read `n` integers into an array.
- Reverse the array **in-place** (without using extra arrays).
- Output the reversed array on a single line, space-separated.

## Example

### Input
```
5
10 20 30 40 50
```
### Output
```
50 40 30 20 10
```
---

### Input
```
3
7 8 9
```
### Output
```
9 8 7
```

## Notes

- Use a two-pointer approach: swap elements from front and back toward the center.
- Bonus: Wrap the logic into a function like  
  `void reverseArray(int arr[], int n)`.