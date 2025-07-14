# Challenge 001 – Factorial

## 🧠 Problem Statement

Write a C++ program that calculates the factorial of a non-negative integer `n`.

The factorial of a number `n` is defined as the product of all positive integers less than or equal to `n`. It is denoted by `n!`.

```
n! = n × (n - 1) × (n - 2) × ... × 1
```

Special cases:
- `0! = 1` by definition
- Negative numbers are not allowed (return an error message)

## ✅ Requirements

- Input: A single non-negative integer `n` (e.g., 5)
- Output: The factorial of `n` (e.g., `5! = 120`)
- Handle edge cases like `0` and negative input
- Implement both:
  - Recursive solution
  - Iterative solution

## 🧪 Example

```
Input: 5
Output: 120

Input: 0
Output: 1

Input: -3
Output: Error: factorial is undefined for negative numbers.
```

## 🚀 Bonus (Optional)

- Add user input handling via `cin`
- Wrap both implementations in separate functions
- Measure time difference between recursive and iterative solutions
- Write test cases using assert or a small test driver

## 🗂️ Files

- `main.cpp` – Contains your implementation
- `README.md` – This file
- `notes.md` – (Optional) Personal notes or reflection
