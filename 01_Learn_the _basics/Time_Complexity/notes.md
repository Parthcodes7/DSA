#  Time & Space Complexity

## What is Time Complexity?

Time Complexity measures how the running time of an algorithm grows as the input size (`n`) increases.

> It measures the **growth of execution time**, not the actual time in seconds.

---

## Big O Notation

Big O represents the **Worst Case Time Complexity** of an algorithm.

Example:
- Linear Search → **O(n)**
- Binary Search → **O(log n)**

---

## Common Time Complexities

| Complexity | Example |
|------------|---------|
| O(1) | Accessing an array element |
| O(log n) | Binary Search |
| O(n) | Linear Search |
| O(n log n) | Merge Sort |
| O(n²) | Bubble Sort |
| O(2ⁿ) | Recursive Fibonacci |
| O(n!) | Generating Permutations |

---

## Rules for Finding Time Complexity

### 1. Ignore Constants

```text
O(2n) → O(n)
O(100) → O(1)
```

---

### 2. Ignore Lower Order Terms

```text
O(n² + n) → O(n²)
O(n³ + n² + 5) → O(n³)
```

---

### 3. Consecutive Loops → Add

```cpp
for(int i = 0; i < n; i++) {}

for(int j = 0; j < n; j++) {}
```

Time Complexity:

```text
O(n + n) = O(2n) = O(n)
```

---

### 4. Nested Loops → Multiply

```cpp
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {

    }
}
```

Time Complexity:

```text
O(n × n) = O(n²)
```

---

### 5. Different Variables

```cpp
for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {

    }
}
```

Time Complexity:

```text
O(n × m)
```

---

## Space Complexity

Space Complexity measures the **extra memory** used by an algorithm.

### O(1)

```cpp
int sum = 0;
```

Uses constant extra memory.

---

### O(n)

```cpp
vector<int> temp(n);
```

Uses an extra array of size `n`.

---

## Complexity Order (Best → Worst)

```text
                                                    O(1)
                                                    ↓
                                                    O(log n)
                                                    ↓
                                                    O(n)
                                                    ↓
                                                    O(n log n)
                                                    ↓
                                                    O(n²)
                                                    ↓
                                                    O(n³)
                                                    ↓
                                                    O(2ⁿ)
                                                    ↓
                                                    O(n!)
                                                    ```

---

# Quick Revision

 Single loop → O(n)

 Nested loops → O(n²)

 Binary Search → O(log n)

 Merge Sort → O(n log n)

 Bubble Sort → O(n²)

 Ignore constants & lower-order terms.

---

# Key Takeaways

- Time Complexity → Growth of execution time.
- Space Complexity → Extra memory used.
- Always try to optimize for a lower time complexity.
