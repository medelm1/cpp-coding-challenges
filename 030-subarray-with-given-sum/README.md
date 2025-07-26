# Challenge 030 - Subarray with Given Sum

## Problem Statement

Write a C++ program to determine if there exists a **contiguous subarray** within a given array of **positive integers** that adds up to a given target sum.

If such a subarray exists, print its starting and ending indices. If multiple solutions exist, return the first one found.

## Requirements

- Accept the size of the array and the target sum from the user.
- Accept only **positive integers** as array elements.
- Use an efficient algorithm (not brute-force).
- Print the subarray indices or an appropriate message if not found.

## Example

### Input
```
Enter array size: 7  
Enter array elements: 1 4 20 3 10 5 2  
Enter target sum: 33
```
### Output
```
Subarray found from index 2 to 4
```
_Explanation: 20 + 3 + 10 = 33_
---
### Input
```
Enter array size: 5  
Enter array elements: 1 2 3 7 5  
Enter target sum: 12
```
### Output
```
Subarray found from index 1 to 3
```