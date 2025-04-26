# Algorithm to Remove Duplicates from a Sorted Array

## Problem Statement

Given a **sorted array**, remove the duplicate elements such that each element appears only once. Return the new length of the array after removing duplicates.

You must do this **in-place** with **O(1)** extra memory.

---

## Brute Force Approach (Using Set)

### Idea

- Create an empty set.
- Insert every element of the array into the set.
- Sets automatically remove duplicates and maintain sorted order.

### Steps

1. Initialize an empty set `ans`.
2. Loop through each element in the array.
3. Insert each element into the set.
4. Return the set.

### Time Complexity

- **O(n log n)** (inserting `n` elements, each taking `log n` time in a `set`)

### Space Complexity

- **O(n)** (for storing the set)

---

## Optimal Approach (Two Pointers Method)

### Idea

Since the array is already sorted:

- We can use two pointers (`i` and `j`).
- `i` tracks the last unique element's position.
- `j` scans the array.
- When a new unique element is found, move `i` forward and update `arr[i] = arr[j]`.

### Steps

1. Initialize `i = 0` (first element).
2. Loop `j` from 1 to `n-1`:
   - If `arr[j] != arr[i]`, increment `i` by 1 and set `arr[i] = arr[j]`.
3. Return `i + 1` as the new length of the array.

### Pseudocode

```cpp
function RemoveDuplicateinSortedArray(arr):
    i = 0
    for j = 1 to arr.length - 1:
        if arr[j] != arr[i]:
            i += 1
            arr[i] = arr[j]
    return i + 1
```

### Time Complexity

- **O(n)** (single pass through array)

### Space Complexity

- **O(1)** (no extra space used)

---

## Important Notes

- In Brute Force, if `unordered_set` is used instead of `set`, insertion becomes O(1) on average but order is lost.
- Optimal approach is preferred for interviews because it uses constant space and respects in-place modification.

---

# Summary Table

| Approach               | Time Complexity | Space Complexity | Order Maintained | In-Place |
| :--------------------- | :-------------- | :--------------- | :--------------- | :------- |
| Brute Force (Set)      | O(n log n)      | O(n)             | Yes              | No       |
| Optimal (Two Pointers) | O(n)            | O(1)             | Yes              | Yes      |
