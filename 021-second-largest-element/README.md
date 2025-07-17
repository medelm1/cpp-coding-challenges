# Challenge 021: Second Largest Element

## Problem Statement

Write a C++ program to find the **second largest element** in an array of integers.

## Requirements

- Read an integer `n` (1 ≤ n ≤ 100) — the number of elements.
- Then read `n` integers.
- Output the **second largest** element.
- If all elements are the same or there is no second largest, print `"No second largest element"`.

## Example

### Input
```
5
4 2 7 1 9
```
### Output
```
7
```
---
### Input
```
4
10 10 10 10
```
### Output
```
No second largest element
```

## Notes

- Do not use built-in sort functions — implement logic using loops.
- Bonus: Wrap the logic into a function like  
  `int secondLargest(const int arr[], int n)`.