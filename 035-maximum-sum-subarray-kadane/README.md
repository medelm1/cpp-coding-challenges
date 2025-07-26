# Challenge 035 - Maximum Sum Subarray (Kadane's Algorithm)

## Problem Statement

Write a C++ program to find the **maximum sum subarray** using **Kadane’s Algorithm**.

This problem aims to find the **contiguous subarray** within a one-dimensional array that has the **largest sum**.

## Requirements

- Accept the size and elements of the array from the user.
- Implement **Kadane’s Algorithm** for optimal performance.
- Return the maximum subarray sum.
- Handle arrays containing all negative numbers properly.

## Example

### Input
```
Enter array size: 9  
Enter array elements: -2 -3 4 -1 -2 1 5 -3 2
```
### Output
```
Maximum subarray sum: 7
```
_Explanation: Subarray `[4, -1, -2, 1, 5]` gives the max sum._
---
### Input
```
Enter array size: 5  
Enter array elements: -5 -1 -3 -4 -2
```
### Output
```
Maximum subarray sum: -1
```