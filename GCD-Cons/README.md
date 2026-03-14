# GCD using Consecutive Integer Checking Algorithm

## Objective
To write a program to find the Greatest Common Divisor (GCD) of two numbers using the Consecutive Integer Checking Algorithm.

## Algorithm Description

1. Read two integers `a` and `b`.
2. Let `t = min(a, b)`.
3. Check if `t` divides both `a` and `b`.
4. If yes → `t` is the GCD.
5. Otherwise decrease `t` by 1 and repeat.
6. Continue until the GCD is found.

## Time Complexity

Worst Case Complexity:

O(min(a,b))

## Sample Output

![Output](/GCD-Cons/output.png)

## Observation

1. The algorithm checks common divisors starting from the minimum of the two numbers.
2. The first divisor that divides both numbers is the GCD.
3. This method is simple but slower compared to Euclid's Algorithm.
