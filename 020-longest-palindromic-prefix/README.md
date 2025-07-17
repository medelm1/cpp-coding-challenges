# Challenge 020: Longest Palindromic Prefix

## Problem Statement

Given a string, write a C++ program to find the **longest prefix** of the string that is also a **palindrome**.

## Requirements

- Input: A single string `s` (length ≤ 10,000).
- Output: The longest prefix of `s` which reads the same forwards and backwards.
- If no palindrome prefix other than the first character exists, output the first character.

## Example

### Input
```
abacdfgdcaba
```
### Output
```
aba
```
---
### Input
```
racecarxyz
```
### Output
```
racecar
```
---
### Input
```
abcdef
```
### Output
```
a
```

## Notes

- Consider writing a helper function `bool isPalindrome(const string& str)` to check if a substring is a palindrome.
- Iterate over prefixes from longest to shortest to find the answer efficiently.
- Bonus: Try to optimize to O(n) using advanced algorithms (optional).

