# Challenge 002 – Synthetic Division

## 🧠 Problem Statement

Write a C++ program that performs **synthetic division** of a polynomial by a binomial of the form `(x - c)`.

Synthetic division is a simplified form of polynomial division, specifically used when dividing by linear factors. It's faster and more efficient than long division for such cases.

## ✅ Requirements

- Input:
  - A list of polynomial coefficients in descending order of powers
  - A constant `c` from the divisor `(x - c)`
- Output:
  - The coefficients of the quotient polynomial
  - The remainder

- Use arrays or vectors to represent coefficients
- Implement a function that performs the division
- Print both the resulting quotient and remainder

## 🧪 Example

```
Polynomial:     2x³ - 6x² + 2x - 1
Divisor:        x - 3
Coefficients:   [2, -6, 2, -1]
c = 3

Output:
Quotient:       2x² + 0x + 2
Remainder:      5

Quotient Coefficients: [2, 0, 2]
```

## 🚀 Bonus (Optional)

- Accept user input for polynomial degree and coefficients
- Display the result as a readable polynomial string
- Support floating point coefficients
- Use exception handling for invalid input
