# Challenge 043 - Check Subsequence

## Problem Statement

Write a C++ program to check whether one string is a **subsequence** of another string.

A subsequence means all characters of the first string appear in the second string in the same order, but not necessarily contiguously.

## Requirements

- Accept two strings `s1` and `s2` from the user.
- Determine if `s1` is a subsequence of `s2`.
- Return `true` or `false` (or equivalent message).

## Example

### Input
```
Enter string s1: abc  
Enter string s2: ahbgdc
```
### Output
```
"abc" is a subsequence of "ahbgdc"
```
---
### Input
```
Enter string s1: axc  
Enter string s2: ahbgdc
```
### Output
```
"axc" is NOT a subsequence of "ahbgdc"
```