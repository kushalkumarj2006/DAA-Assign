# Tower of Hanoi – Runtime Analysis

## Objective
Implement the Tower of Hanoi algorithm and analyze the running time as the number of disks increases. Plot a graph of **Number of Disks vs Time Taken**.

---

## Formula

The Tower of Hanoi follows the recurrence relation:

T(n) = 2T(n-1) + 1

Solving the recurrence:

T(n) = 2ⁿ − 1

Where  
- **n** = number of disks  
- **T(n)** = number of moves

---

## Time Complexity

The algorithm has **exponential time complexity**:

O(2ⁿ)

---

## Program Output

The program was executed with increasing number of disks until execution time became very large.

Maximum number of disks executed:

**n = 34**

### Program Output Screenshot

![Program Output](TOH/output.png)

---

## Runtime Graph

Graph plotted for **Number of Disks vs Time Taken (seconds)**.

![Runtime Graph](TOH/graph.png)

---

## Observation

- Execution time increases slowly for small values of **n**.
- After around **25 disks**, execution time increases rapidly.
- The graph clearly shows **exponential growth**.

---

## Conclusion

The Tower of Hanoi problem requires **2ⁿ − 1 moves** to solve for **n disks**.  
The experimental results confirm the theoretical **O(2ⁿ)** exponential time complexity.
