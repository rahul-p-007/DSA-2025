# Find Second Smallest and Second Largest Element in an Array

---

## Problem Statement

Given an array of integers, find the **second smallest** and **second largest** elements in the array.
If either does not exist (because all elements are the same), return `-1`.

---

## Approach

We will discuss three approaches:

- **Brute Force** (Sorting Method)
- **Better Approach** (Two loops)
- **Optimal Approach** (Single loop)

---

# 1. Brute Force Approach

**Algorithm:**

1. Sort the array in ascending order.
2. Traverse from the end to find the first element smaller than the largest (for second largest).
3. Traverse from the beginning to find the first element greater than the smallest (for second smallest).

**Time Complexity:** O(N log N) due to sorting.

**Space Complexity:** O(1) if sorting in-place, otherwise O(N).

**Steps:**

- Sort the array.
- `largest = arr[n-1]`
- Traverse backward from `n-2` to `0` to find second largest.
- `smallest = arr[0]`
- Traverse forward from `1` to `n-1` to find second smallest.

---

# 2. Better Approach

**Algorithm:**

1. Find the largest and smallest elements in the array.
2. Traverse again:
   - Find the largest number smaller than the maximum (second largest).
   - Find the smallest number greater than the minimum (second smallest).

**Time Complexity:** O(2N)

**Space Complexity:** O(1)

**Steps:**

- First loop: Find `largest` and `smallest`.
- Second loop: Find `secondLargest` and `secondSmallest` by comparing with `largest` and `smallest`.

---

# 3. Optimal Approach

**Algorithm:**

1. Initialize:
   - `largest = smallest = arr[0]`
   - `secondLargest = -1`
   - `secondSmallest = INT_MAX`
2. Traverse the array once:
   - If current element > largest:
     - `secondLargest = largest`
     - `largest = current element`
   - Else if current element < largest and current element > secondLargest:
     - `secondLargest = current element`
   - If current element < smallest:
     - `secondSmallest = smallest`
     - `smallest = current element`
   - Else if current element > smallest and current element < secondSmallest:
     - `secondSmallest = current element`

**Time Complexity:** O(N)

**Space Complexity:** O(1)

**Steps:**

- One traversal to update largest, secondLargest, smallest, and secondSmallest.

---

## Full Optimal Code (C++)

```cpp
#include<bits/stdc++.h>
using namespace std;

pair<int, int> findSecondSmallestLargest(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) return {-1, -1};

    int largest = arr[0], secondLargest = -1;
    int smallest = arr[0], secondSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondLargest == -1) secondLargest = -1;
    if (secondSmallest == INT_MAX) secondSmallest = -1;

    return {secondSmallest, secondLargest};
}

int main() {
    vector<int> arr = {1, 2, 4, 7, 7, 5};

    pair<int, int> ans = findSecondSmallestLargest(arr);

    cout << "Second Smallest: " << ans.first << endl;
    cout << "Second Largest: " << ans.second << endl;

    return 0;
}
```

---

# Summary

| Approach         | Time Complexity | Space Complexity |
| ---------------- | --------------- | ---------------- |
| Brute Force      | O(N log N)      | O(1)             |
| Better Approach  | O(2N) = O(N)    | O(1)             |
| Optimal Approach | O(N)            | O(1)             |

---

# Note

- Always check for corner cases where array has all elements same or size < 2.
- Returning `-1` if second largest or second smallest doesn't exist makes the solution more robust.

---

# Credits

[TakeUForward: Find Second Smallest and Second Largest Element](https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/)
