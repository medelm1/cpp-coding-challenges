# Challenge 013: Prime Numbers in Range

## Problem Statement

Write a C++ program that finds and prints all **prime numbers** within a given range `[L, R]`.

A **prime number** is a number greater than 1 that has no positive divisors other than 1 and itself.

## Requirements

- Read two integers `L` and `R` (`1 <= L <= R <= 10,000`).
- Print all prime numbers between `L` and `R` (inclusive), one per line.
- If no prime numbers are found, print `"No primes in range"`.

## Example

### Input
```
10 20
```
### Output
```
11
13
17
19
```
---
### Input
```
8 10
```
### Output
```
No primes in range
```

## Notes

- You may use a helper function like `bool isPrime(int n)` to encapsulate the prime-checking logic.
- Bonus: Optimize the prime check by only looping up to `sqrt(n)`.

