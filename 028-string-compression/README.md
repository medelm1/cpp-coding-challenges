# Challenge 028: String Compression

## Problem Statement

Write a C++ program that performs **basic string compression** using the counts of repeated characters.

For example, the string `"aaabbc"` would become `"a3b2c1"`.

If the compressed string is **not shorter** than the original string, return the original string instead.

## Requirements

- Accept a lowercase string from the user (no spaces).
- Traverse the string and compress consecutive repeating characters using the format: `<char><count>`.
- Return the compressed string **only if it's shorter** than the original. Otherwise, return the original string.

## Example

### Input
```
Enter a string: aaabbc
```
### Output
```
Compressed string: a3b2c1
```
---
### Input
```
Enter a string: abc
```
### Output
```
Compressed string: abc
```