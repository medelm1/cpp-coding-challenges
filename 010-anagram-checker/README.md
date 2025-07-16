# Challenge 010: Anagram Checker

## Problem Statement

Write a C++ program that checks whether two given **strings** are **anagrams** of each other.

Two words are anagrams if they contain the same characters in the same frequency, but possibly in a different order.

### Examples of anagrams:
- `"listen"` and `"silent"`
- `"evil"` and `"vile"`
- `"a gentleman"` and `"elegant man"` (ignoring spaces)

## Requirements

- Read two strings from the user.
- Ignore spaces and assume all characters are lowercase.
- Check if they are anagrams of each other.
- Output `"Anagram"` if true, otherwise `"Not an anagram"`.

## Example

### Input
```
listen
silent
```

### Output
```
Anagram
```
### Input
```
hello
world
```

### Output
```
Not an anagram
```


## Notes

- Use an array of size 26 to count characters (`a` to `z`).
- Remove spaces if any, and ignore letter case (assume already lowercase, or normalize using `tolower()`).
- Bonus: Make it work with mixed-case and punctuation.