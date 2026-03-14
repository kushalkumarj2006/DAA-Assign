# Linear Search Time Complexity Analysis

## Objective
To implement Linear Search to find a given element in a list of N numbers and measure the running time for Best Case, Average Case, and Worst Case inputs.

## Algorithm Description
Linear Search sequentially checks each element of the list until the target element is found or the list ends.

Steps:
1. Read the number of elements `n`
2. Store elements in an array
3. Perform linear search
4. Measure execution time using `QueryPerformanceCounter`
5. Repeat for Best, Average and Worst cases for input sizes from 10,000 to 100,000 with step size 5,000

## Formula / Recurrence

Best Case  
Element is found at the first position.

Average Case  
Element is found in the middle of the list.

Worst Case  
Element is found at the last position or not present.

## Time Complexity

| Case | Complexity |
|-----|------------|
| Best Case | O(1) |
| Average Case | O(n) |
| Worst Case | O(n) |

## Program Output

![Output](/LinearSearch/output.png)

## Graph

![Graph](/LinearSearch/graph.png)

## Observation

1. Best case running time remains nearly constant.
2. Average case running time increases linearly with input size.
3. Worst case running time also increases linearly.
4. The experimental results match the theoretical time complexity of Linear Search.
