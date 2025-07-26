# Challenge 039 - Valid Parentheses

## Problem Statement

Write a C++ program to determine if a given string containing only the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'` is **valid**.

A string is valid if all types of parentheses are correctly opened and closed in the right order.

## Requirements

- Accept a string of parentheses from the user.
- Use a stack to check for validity.
- Return `true` or `false` (or an equivalent message).
- Handle empty string as valid.

## Example

### Input
```
Enter parentheses string: ()[]{}
```
### Output
```
Valid parentheses string.
```
---
### Input
```
Enter parentheses string: ([)]
```
### Output
```
Invalid parentheses string.
```