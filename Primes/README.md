# Prime Number Generation up to 1000

## Objective
To write a program to generate all prime numbers up to 1000.

## Algorithm Description

1. Start from number 2.
2. For each number `i`, check divisibility from `2` to `√i`.
3. If divisible by any number → not prime.
4. If not divisible → prime number.
5. Print all primes up to 1000.

## Time Complexity

For each number we check divisibility up to √n.

Worst case complexity:

O(n√n)

## Program Output

![Output](/Primes/output.png)

## Observation

1. Prime numbers are numbers greater than 1 having exactly two factors.
2. Checking up to √n reduces unnecessary comparisons.
3. Total primes up to 1000 = **168**.
