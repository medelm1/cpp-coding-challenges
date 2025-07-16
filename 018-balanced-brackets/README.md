# Challenge 018: Balanced Brackets

## Problem Statement

Write a C++ program that checks whether a given string of brackets is **balanced**.

A string is balanced if:
- Every opening bracket has a corresponding closing bracket.
- Brackets are closed in the correct order.

Valid brackets include:
- `()`
- `{}` 
- `[]`

## Requirements

- Input: A single line string consisting of only brackets `()[]{}` (length ≤ 10^5).
- Output: `"YES"` if the string is balanced, `"NO"` otherwise.

## Example

### Input
```
{[()]}
```
### Ouput
```
YES
```
---
### Input
```
{[(])}
```
### Ouput
```
NO
```
---
### Input
```
((()))
```
### Ouput
```
YES
```

## Notes

- You are encouraged to use a `stack` to implement this.
- Bonus: Extract the logic into a function:  
  `bool isBalanced(const string& s);`