# Challenge 008: Most Frequent Digit

## Problem Statement

Write a C++ program that finds the **most frequent digit** in a given **positive integer**.

If multiple digits have the same highest frequency, print the **smallest one** among them.

## Requirements

- Read a positive integer from the user (it may contain up to 18 digits).
- Count the frequency of each digit (0–9).
- Identify the digit(s) that appear the most.
- If there’s a tie, return the **smallest digit** among those with max frequency.

## Example

### Input
```
4422999
```

### Output
```
Most frequent digit: 9 (frequency: 3)
```

### Input
```
1223334444
```

### Output
```
Most frequent digit: 4 (frequency: 4)
```

### Input
```
112233
```

### Output
```
Most frequent digit: 1 (frequency: 2)
```


## Notes

- You may treat the input as a string or a number.
- Use an array of size 10 to store frequencies.
- Bonus: Wrap the logic in a function like `int mostFrequentDigit(string n)`.

