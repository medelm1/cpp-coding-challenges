# Challenge 009: Armstrong Number Checker

## Problem Statement

Write a C++ program that checks whether a given **positive integer** is an **Armstrong number**.

An **Armstrong number** (also known as a narcissistic number) is a number that is equal to the **sum of its own digits raised to the power of the number of digits**.

### Definition:
For a number with `n` digits:
\[
\text{Armstrong if: } d_1^n + d_2^n + \dots + d_n^n = \text{original number}
\]

## Requirements

- Read a **positive integer** from the user.
- Determine the number of digits.
- Compute the sum of each digit raised to the power of the number of digits.
- Output `"Armstrong"` if the condition is true, otherwise `"Not an Armstrong number"`.

## Examples

### Input
```
153
```
### Output
```
Armstrong
```

```
*Explanation: 1³ + 5³ + 3³ = 153*
```

### Input
```
9474
```
### Output
```
Armstrong
```

```
*Explanation: 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474*
```

### Input
```
123
```
### Output
```
Not an Armstrong number
```

## Notes

- You can read the input as an integer or a string.
- Use `pow(base, exponent)` from `<cmath>` if needed.
- Bonus: Implement both `string` and `integer` versions.