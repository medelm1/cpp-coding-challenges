# Challenge 007: Palindrome Number Checker

## Problem Statement

Write a C++ program that checks whether a given **positive integer** is a **palindrome**.

A number is a palindrome if it reads the same backward as forward. For example, `121`, `1221`, and `7` are palindromes, but `123`, `10`, and `1234` are not.

## Requirements

- Read a positive integer from the user.
- Determine whether it is a **palindrome**.
- Output `"Palindrome"` if it is, otherwise `"Not a palindrome"`.

## Example

### Input
```
1221
```

### Output
```
Palindrome
```

### Input
```
12345
```

### Output
```
Not a palindrome
```

## Notes

- You can convert the integer to a string and check if it reads the same backward.
- Alternatively, try solving it using **integer arithmetic only** (optional challenge).
- Bonus: Wrap the check into a function like `bool isPalindrome(int n)`.