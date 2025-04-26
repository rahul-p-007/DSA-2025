# Algorithm to Left Rotate the Array by One Position

## Problem Statement

Given an array of integers, **left rotate** the array by **one position**.

Example:

- Input: `[1, 2, 3, 4, 5]`
- Output: `[2, 3, 4, 5, 1]`

---

## Brute Force Approach

### Idea

- Store the first element separately.
- Shift all elements one position to the left.
- Place the stored first element at the end of the array.

### Steps

1. Save the first element in a temporary variable `temp`.
2. Loop from index `1` to `n-1`:
   - Move `arr[i]` to `arr[i-1]`.
3. After the loop, set `arr[n-1] = temp`.

### Pseudocode

```cpp
function LeftRotateByOne(arr):
    temp = arr[0]
    for i from 1 to n-1:
        arr[i-1] = arr[i]
    arr[n-1] = temp
    return arr
```

### Time Complexity

- **O(n)** (every element is moved once)

### Space Complexity

- **O(1)** (only a temporary variable is used)

---

## Important Notes

- Works for arrays of any size, including arrays with one element (no change).
- For an empty array, no operation is needed.
- This approach is simple and efficient.

---

# Summary Table

| Approach                            | Time Complexity | Space Complexity | Notes             |
| :---------------------------------- | :-------------- | :--------------- | :---------------- |
| Brute Force (Shift + Temp Variable) | O(n)            | O(1)             | In-place rotation |

---

# Example Walkthrough

Given `arr = [1, 2, 3, 4, 5]`

- Step 1: `temp = 1`
- Step 2: Shift elements:
  - arr[0] = arr[1] → arr[0] = 2
  - arr[1] = arr[2] → arr[1] = 3
  - arr[2] = arr[3] → arr[2] = 4
  - arr[3] = arr[4] → arr[3] = 5
- Step 3: arr[4] = temp → arr[4] = 1

Final Output: `[2, 3, 4, 5, 1]`
