# Challenge 025: Run-Length Encoding

## Problem Statement

Write a C++ program that performs **run-length encoding (RLE)** on a given string.

RLE compresses strings by replacing consecutive repeated characters with the character followed by the count of repetitions.

## Requirements

- Read a string from the user (only lowercase letters).
- Compress it using RLE.
- Print the compressed string.

## Example

### Input
```
aaabbcddd
```
### Output
```
a3b2c1d3
```
---
### Input
```
abcd
```
### Output
```
a1b1c1d1
```

## Notes

- Use loops to iterate through the string.
- Keep track of current character and count consecutive repetitions.
- Bonus: Wrap the logic in a function like  
  `string runLengthEncode(const string& s)`.
