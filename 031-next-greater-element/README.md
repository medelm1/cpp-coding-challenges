# Challenge 031 - Next Greater Element

## Problem Statement

Write a C++ program that finds the **Next Greater Element (NGE)** for each element in a given array.

The Next Greater Element for an element `x` is the **first greater element** on the **right side** of `x` in the array. If no such element exists, print `-1` for that position.

## Requirements

- Accept the size and elements of the array from the user.
- Use an efficient algorithm (e.g., with a stack).
- Print each element alongside its next greater element.

## Example

### Input
```
Enter array size: 6  
Enter array elements: 4 5 2 25 7 8
```
### Output
```
Element: 4 --> Next Greater: 5  
Element: 5 --> Next Greater: 25  
Element: 2 --> Next Greater: 25  
Element: 25 --> Next Greater: 7  
Element: 7 --> Next Greater: 8  
Element: 8 --> Next Greater: -1
```