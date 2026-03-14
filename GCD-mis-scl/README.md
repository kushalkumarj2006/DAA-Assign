# GCD using Middle School Algorithm

## Objective
To find the Greatest Common Divisor (GCD) of two numbers using the Middle School Algorithm.

## Algorithm Description

1. Find the prime factors of the first number `m`.
2. Find the prime factors of the second number `n`.
3. Identify all common prime factors between the two factorizations.
4. Multiply all common factors to obtain the GCD.

Example:

60 = 2 × 2 × 3 × 5  
24 = 2 × 2 × 2 × 3  

Common factors → 2, 2, 3  

GCD = 2 × 2 × 3 = 12

## Time Complexity

Prime factorization up to n:

O(n)

---

## Program Output

![Program Output](/GCD-mis-scl/output.png)

---

## Observation

The Middle School algorithm determines the GCD by comparing prime factorizations of both numbers and multiplying the common factors.
