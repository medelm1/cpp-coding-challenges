# Challenge 014: Count Vowels and Consonants

## Problem Statement

Write a C++ program that reads a line of text (a full sentence) and counts the number of **vowels** and **consonants** in it.

Spaces, digits, and punctuation should be ignored.

## Requirements

- Read a full line of text (you can use `getline`).
- Convert all characters to lowercase.
- Count how many are **vowels** (`a, e, i, o, u`).
- Count how many are **consonants** (`a-z` letters excluding vowels).
- Ignore any characters that are not letters.

## Example

### Input
```
Hello World!
```
### Output
```
Vowels: 3
Consonants: 7
```
---

### Input
```
123 C++ is cool...
```
### Output
```
Vowels: 4
Consonants: 6
```


## Notes

- You can use `isalpha()` to check if a character is a letter.
- Use `tolower()` from `<cctype>` to normalize case.
- Bonus: Wrap the logic in a function like `void countLetters(const string& s, int& vowels, int& consonants)`.