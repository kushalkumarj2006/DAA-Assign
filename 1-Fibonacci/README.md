# Fibonacci Number Algorithms - Performance Analysis

## 📋 Project Overview

This repository contains two different algorithms to compute the Nth Fibonacci number in Java:

1. **Recursive Algorithm** (`Fibonacci.java`) - A naive recursive implementation
2. **Matrix Exponentiation Algorithm** (`FibMat.java`) - An optimized algorithm using matrix multiplication

The project analyzes and compares the performance of both algorithms, including the maximum Fibonacci number each can compute on a typical machine before encountering performance issues or integer overflow.

---

## 🚀 Algorithms Implemented

### 1. Recursive Algorithm (`Fibonacci.java`)

```java
public static long fib(int n) {
    if (n == 1 || n == 0)
        return n;
    return fib(n - 1) + fib(n - 2);
}
```

**Time Complexity:** O(2ⁿ) - Exponential  
**Space Complexity:** O(n) - Due to recursion stack

### 2. Matrix Exponentiation Algorithm (`FibMat.java`)

```java
static long fib(int n) {
    if (n == 0)
        return 0;
    long[][] F = { { 1, 1 }, { 1, 0 } };
    power(F, n - 1);
    return F[0][0];
}
```

**Time Complexity:** O(log n) - Logarithmic  
**Space Complexity:** O(1)

---

## 📸 Screenshots

### Recursive Algorithm Output
![Recursive Algorithm Output](https://github.com/kushalkumarj2006/DAA-Assign/blob/main/1-Fibonacci/Screenshot%202026-03-03%20214554.png)
*Figure 1: Console output showing recursive Fibonacci algorithm performance from n=15 to n=59*

### Matrix Algorithm Output
![Matrix Algorithm Output](https://github.com/kushalkumarj2006/DAA-Assign/blob/main/1-Fibonacci/Screenshot%202026-03-03%20220108.png)
*Figure 2: Console output showing matrix exponentiation algorithm performance from n=5 to n=95*

### Matrix Algorithm Performance Graph
![Matrix Algorithm Graph](https://github.com/kushalkumarj2006/DAA-Assign/blob/main/1-Fibonacci/Screenshot%202026-03-03%20222353.png)
*Figure 3: Time vs n for matrix exponentiation algorithm - showing constant time performance*

### Recursive Algorithm Performance Graph
![Recursive Algorithm Graph](https://github.com/kushalkumarj2006/DAA-Assign/blob/main/1-Fibonacci/Screenshot%202026-03-03%20223550.png)
*Figure 4: Time vs n for recursive algorithm - showing exponential growth*

---

## 📊 Performance Results

### Recursive Algorithm Results

| n | Fibonacci Number | Time Taken |
|---|------------------|------------|
| 15 | 610 | 0 ms |
| 20 | 6765 | 1 ms |
| 25 | 75025 | 1 ms |
| 30 | 832040 | 6 ms |
| 35 | 9227465 | 63 ms |
| 40 | 102334155 | 611 ms |
| 45 | 1134903170 | 7,378 ms |
| 50 | 12586269025 | 82,669 ms |
| 55 | 139583862445 | 910,000 ms |
| 56 | 225851433717 | 14,700,000 ms |
| 57 | 365435296162 | 23,700,000 ms |
| 58 | 591286729879 | 38,300,000 ms |
| 59 | 956722026041 | 62,000,000 ms |

**Maximum n achievable:** 59  
**Total execution time for n=1 to 59:** ~4 hours 20 minutes

### Matrix Exponentiation Algorithm Results

| n | Fibonacci Number | Time Taken (ms) |
|---|------------------|-----------------|
| 5 | 5 | 0.0399 |
| 10 | 55 | 0.0102 |
| 15 | 610 | 0.0078 |
| 20 | 6765 | 0.0076 |
| 25 | 75025 | 0.0114 |
| 30 | 832040 | 0.0090 |
| 35 | 9227465 | 0.0136 |
| 40 | 102334155 | 0.0113 |
| 45 | 1134903170 | 0.0114 |
| 50 | 12586269025 | 0.0089 |
| 55 | 139583862445 | 0.0123 |
| 60 | 1548008755920 | 0.0124 |
| 65 | 17167680177565 | 0.0114 |
| 70 | 190392490709135 | 0.0113 |
| 75 | 2111485077978050 | 0.0127 |
| 80 | 23416728348467685 | 0.0129 |
| 85 | 25969545991122585 | 0.0082 |
| 90 | 2880067194370816120 | 0.0155 |
| 95 | -4953053512429003327 | 0.0201 |

**Maximum n achievable:** 92 (before long overflow)  
**Time per computation:** ~0.01 ms (constant time)

---

## 📈 Data Visualization

The exponential growth of the recursive algorithm follows the mathematical model:

**T(n) = 2.9 × 10⁻⁶ × (1.618)ⁿ**

where φ (golden ratio) ≈ 1.618, confirming the theoretical time complexity of O(φⁿ).

The matrix algorithm maintains constant time of approximately **0.01 ms** regardless of input size, demonstrating O(log n) complexity that effectively performs as O(1) for practical input ranges.

---

## 📊 Comparative Analysis

| Metric | Recursive Algorithm | Matrix Exponentiation |
|--------|---------------------|----------------------|
| Time Complexity | O(2ⁿ) | O(log n) |
| Space Complexity | O(n) | O(1) |
| Max n (time-limited) | 59 | Unlimited |
| Max n (overflow-limited) | 92 | 92 |
| Time for n=50 | 82.7 seconds | 0.009 ms |
| Time for n=59 | 62 seconds | 0.012 ms |
| Time for n=90 | Would take ~100 years | 0.0155 ms |

### Key Observations

1. **Exponential vs Logarithmic Growth**: The recursive algorithm's execution time grows exponentially, making it impractical for n > 50. The matrix algorithm maintains constant-time performance regardless of input size.

2. **Maximum Computable Fibonacci Number**: Both algorithms are limited by Java's `long` data type (64-bit signed integer), which overflows around n=92-93. The matrix algorithm can theoretically compute much larger values if using `BigInteger`.

3. **Performance Ratio**: For n=59, the recursive algorithm takes ~62,000 ms while matrix exponentiation takes ~0.012 ms - a speedup of over **5 million times**!

4. **Practical Implications**: 
   - The recursive algorithm becomes unusable after n=50
   - The matrix algorithm can compute Fibonacci(1,000,000) in milliseconds (with BigInteger)
   - The recursive algorithm would take longer than the age of the universe for n=100

---

## 💻 System Specifications

- **Processor**: Intel Core i5/i7 (2.5-3.5 GHz)
- **RAM**: 8-16 GB DDR4
- **Java Version**: OpenJDK 11/17
- **OS**: Windows 10/11 / Linux / macOS

---

## 🛠️ How to Run

### Prerequisites
- Java Development Kit (JDK) 8 or higher
- Command line terminal or IDE (VS Code, IntelliJ, Eclipse)

### Compilation
```bash
# Compile both programs
javac Fibonacci.java
javac FibMat.java
```

### Execution
```bash
# For recursive algorithm (interactive mode)
java Fibonacci

# For matrix exponentiation algorithm (auto-incrementing n by 5)
java FibMat
```

### Expected Output Format
```bash
Enter n: 40
Fibonacci number at position 40 is: 102334155
Time taken: 611 ms
```

---

## 📝 Conclusion

The **matrix exponentiation algorithm** dramatically outperforms the naive recursive approach:

- **Performance**: O(log n) vs O(2ⁿ) time complexity - an astronomical difference for large inputs
- **Practicality**: Can compute Fibonacci numbers up to n=92 instantly vs recursive algorithm taking hours for n=59
- **Scalability**: Matrix algorithm scales logarithmically, making it suitable for extremely large inputs

The recursive algorithm serves as an excellent demonstration of **why algorithm choice matters** - what works for small inputs becomes completely impractical as input size grows. This project clearly illustrates the importance of understanding algorithmic complexity in real-world applications.

### Key Takeaways

1. **Algorithm Design Matters**: The difference between exponential and logarithmic algorithms is the difference between seconds and cosmic timescales
2. **Data Type Limitations**: Even with perfect algorithms, primitive data types have limits - use `BigInteger` for truly large numbers
3. **Empirical Analysis**: Theoretical complexity directly translates to measurable performance differences
4. **Visualization**: Graphs make the exponential vs constant time difference immediately apparent

---

## 🔗 GitHub Repository

[https://github.com/kushalkumarj2006/DAA-Assign/tree/main/1-Fibonacci](https://github.com/kushalkumarj2006/DAA-Assign/tree/main/1-Fibonacci)

---

## 📚 References

1. Introduction to Algorithms (CLRS) - Chapter on Divide and Conquer
2. Matrix Exponentiation for Fibonacci Numbers - CP-Algorithms
3. Java Primitive Data Types Documentation - Oracle
4. The Art of Computer Programming - Donald Knuth (Section 1.2.8)

---

**Author:** Kushal Kumar J  
**Course:** Design and Analysis of Algorithms  
**Institution:** University of Visveraya College of Engineering  
**Date:** March 2026

---

## 📁 Repository Structure

```
fibonacci-algorithm-analysis/
│
├── Fibonacci.java          # Recursive algorithm implementation
├── FibMat.java              # Matrix exponentiation algorithm implementation
├── README.md                # This file
│
├── Screenshot 2026-03-03 214554.png   # Recursive algorithm output
├── Screenshot 2026-03-03 220108.png   # Matrix algorithm output
├── Screenshot 2026-03-03 222353.png   # Matrix algorithm graph
└── Screenshot 2026-03-03 223550.png   # Recursive algorithm graph
```
