# Factorial – Runtime Analysis

## Objective

Implement **recursive and non-recursive factorial algorithms** and analyze their running time. Plot a graph of **Input Size (n) vs Time Taken (nanoseconds)**.

---

## Formula

Recursive factorial follows the recurrence relation:

T(n) = T(n − 1) + 1

Solving the recurrence:

T(n) = n

Where

* **n** = input number
* **T(n)** = number of operations

---

## Time Complexity

Both recursive and iterative factorial algorithms have **linear time complexity**:

O(n)

---

## Program Output

The program was executed for increasing values of **n**.

Maximum value executed without overflow:

**n = 20**

### Recursive Output Screenshot

![Recursive Output](/Factorial/rec.png)
### Iterative Output Screenshot

![Iterative Output](https://github.com/kushalkumarj2006/DAA-Assign/blob/main/Factorial/iter.png)

---

## Runtime Graph

Graph plotted for **Input Size (n) vs Time Taken (nanoseconds)**.

Color representation:

* 🔵 Blue – Recursive factorial measured points
* 🟢 Green – Iterative factorial measured points
* 🔴 Red – Best-fit line for recursive factorial
* 🟠 Orange – Best-fit line for iterative factorial

Best-fit equations used:

Recursive

T(n) ≈ 184858n + 472296

Iterative

T(n) ≈ 169947n + 2082538

![Runtime Graph](/Factorial/graph.png)

---

## Observation

* Execution time increases gradually as **n** increases.
* Recursive implementation is slightly slower due to **function call overhead**.
* Iterative implementation avoids recursion but shows similar growth.
* The graph shows **linear growth** in execution time.

---

## Conclusion

Both recursive and iterative factorial algorithms show **linear time complexity O(n)**.
Experimental results confirm the theoretical runtime behavior.
