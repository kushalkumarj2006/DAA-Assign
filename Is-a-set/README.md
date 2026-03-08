# Check Whether Two Elements in a List are Unique – Runtime Analysis

## Objective

Write a program to check whether **any two elements in a given list are the same**.
Run the program for input sizes ranging from **1000 to 10000** with a **step size of 500**.

For each input size measure:

* **Best Case**
* **Average Case**
* **Worst Case**

Plot the running times of all three cases in a **single graph**.

---

## Algorithm

The algorithm compares every element with every other element in the list.

For each element `i`, it checks elements `j > i` to see if any duplicates exist.

If a duplicate is found, the algorithm stops immediately.

---

## Time Complexity

Best Case:

Duplicate elements are found immediately.

```
O(1)
```

Average Case:

Duplicates appear randomly in the list.

```
O(n²)
```

Worst Case:

All elements are unique, so every pair must be compared.

```
O(n²)
```

---

## Program Output

The program was executed for input sizes **1000 to 10000** with a **step size of 500**.

### Program Output Screenshot

![Program Output](/Is-a-set/output.png)

---

## Runtime Graph

Graph plotted for **Input Size vs Running Time (nanoseconds)** showing all three cases.

![Runtime Graph](/Is-a-set/graph.png)

---

## Observation

* Best case running time remains **almost constant**.
* Average case increases **quadratically** with input size.
* Worst case also follows **quadratic growth**.

---

## Conclusion

The algorithm checks all possible element pairs in the worst case, resulting in **O(n²)** time complexity.
Experimental results from the runtime graph confirm the **quadratic growth pattern** for larger inputs.
