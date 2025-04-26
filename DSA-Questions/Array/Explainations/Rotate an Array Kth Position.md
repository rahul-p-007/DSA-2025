# Rotate Array by K Positions

## Problem

Rotate an array `nums` **to the right** by `k` steps.

Example:

- Input: `nums = [1,2,3,4,5,6,7]`, `k = 3`
- Output: `[5,6,7,1,2,3,4]`

---

# 1. Brute Force Approach (Extra Array)

## Algorithm (Right Rotate)

1. Create a temporary array `temp` of size `n`.
2. For every index `i` in original array:
   - Place element at index `i` into `temp[(i + k) % n]`.
3. Copy all elements from `temp` back to `nums`.

## Example Walkthrough

Original: `[1,2,3,4,5,6,7]`, `k=3`

- Place `1` at `(0+3)%7 = 3` → temp[3] = 1
- Place `2` at `(1+3)%7 = 4` → temp[4] = 2
- Place `3` at `(2+3)%7 = 5` → temp[5] = 3
- ... and so on.

Result after copying temp to nums: `[5,6,7,1,2,3,4]`

### Pseudocode

```cpp
// Brute Force
vector<int> RotateArraywithKposition(vector<int> arr, int k) {
    int n = arr.size();
    // Handle the case when k is greater than n
    k = k % n;  // Reduces unnecessary rotations
    int temp[k];  // Temporary array to store the first k elements

    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the front
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy the first k elements from temp to the end of arr
    int j = 0;
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[j++];
    }

    return arr;
}
```

## Time Complexity

- O(n)

## Space Complexity

- O(n)

---

# 2. Optimal Approach (Using Reversals)

## Algorithm (Right Rotate)

1. Handle large k by `k = k % n`.
2. Reverse the entire array.
3. Reverse the first `k` elements.
4. Reverse the remaining `n-k` elements.

## Example Walkthrough

Original: `[1,2,3,4,5,6,7]`, `k=3`

- Reverse all: `[7,6,5,4,3,2,1]`
- Reverse first 3: `[5,6,7,4,3,2,1]`
- Reverse last 4: `[5,6,7,1,2,3,4]`

Final result: `[5,6,7,1,2,3,4]`

## Time Complexity

- O(n)

## Space Complexity

- O(1)

---

# 3. Left Rotate by K Positions

## Algorithm (Left Rotate)

1. Handle large k by `k = k % n`.
2. Reverse the first `k` elements.
3. Reverse the last `n-k` elements.
4. Reverse the entire array.

## Example Walkthrough

Original: `[1,2,3,4,5,6,7]`, `k=3`

- Reverse first 3: `[3,2,1,4,5,6,7]`
- Reverse last 4: `[3,2,1,7,6,5,4]`
- Reverse entire array: `[4,5,6,7,1,2,3]`

Final result: `[4,5,6,7,1,2,3]`

## Time Complexity

- O(n)

## Space Complexity

- O(1)

---

# Summary Table

| Approach    | Direction | Time Complexity | Space Complexity | Core Idea                         |
| :---------- | :-------: | :-------------: | :--------------: | :-------------------------------- |
| Brute Force |   Right   |      O(n)       |       O(n)       | Temp array with new positions     |
| Optimal     |   Right   |      O(n)       |       O(1)       | Three Reversals                   |
| Optimal     |   Left    |      O(n)       |       O(1)       | Three Reversals (different order) |

---

# Important

- Always apply `k = k % n` to avoid unnecessary rotations.
- Right rotation: reverse the entire array first.
- Left rotation: reverse first k, then reverse last n-k, then reverse whole array.
