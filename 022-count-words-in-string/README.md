# Challenge 022: Count Words in String

## Problem Statement

Write a C++ program that counts the number of words in a given sentence.

Words are sequences of characters separated by one or more spaces.

## Requirements

- Read a full line of input (sentence).
- Count the number of words.
- Output the count.

## Example

### Input
```
Hello, how are you today?
```
### Output
```
5
```
---
### Input
```
This sentence has irregular spaces.
```
### Output
```
5
```

## Notes

- You can use `getline` to read the input line.
- Consider trimming extra spaces or handling multiple spaces.
- Bonus: Implement your own function `int countWords(const string& s)`.