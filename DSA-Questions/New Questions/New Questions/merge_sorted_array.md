# 🔁 Merge Sorted Array

## 📝 Problem Description

You are given two integer arrays, `nums1` and `nums2`, both sorted in non-decreasing order.

The goal is to merge `nums2` into `nums1` as one sorted array **in-place**.

- `nums1` has a size of `m + n`, where the first `m` elements denote the valid elements, and the last `n` elements are **placeholders** (`0`s) to accommodate elements from `nums2`.
- `nums2` has `n` elements.

Your function **should not return anything**, but **modify `nums1` in-place**.

---

## 🧪 Examples

### Example 1:

```
Input: nums1 = [1, 2, 3, 0, 0, 0], m = 3
       nums2 = [2, 5, 6], n = 3

Output: [1, 2, 2, 3, 5, 6]
```

### Example 2:

```
Input: nums1 = [1], m = 1
       nums2 = [], n = 0

Output: [1]
```

### Example 3:

```
Input: nums1 = [0], m = 0
       nums2 = [1], n = 1

Output: [1]
```

---

## ✅ Constraints

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10^9 <= nums1[i], nums2[j] <= 10^9`

---

## 🚀 Follow-up

> Can you design an algorithm that runs in **O(m + n)** time?

---

## 💡 Optimal Solution (Two Pointers from the End)

We use **three pointers**:

- `i = m - 1` → pointing to the last valid element in `nums1`
- `j = n - 1` → pointing to the last element in `nums2`
- `k = m + n - 1` → pointing to the last index in `nums1`

We compare elements from the back and place the **largest** at the end of `nums1`.

---

## 🧠 Algorithm Steps

1. Initialize `i = m - 1`, `j = n - 1`, `k = m + n - 1`
2. While `i >= 0` and `j >= 0`:
   - If `nums1[i] > nums2[j]`, set `nums1[k] = nums1[i]`, then `i--`
   - Else, set `nums1[k] = nums2[j]`, then `j--`
   - Decrement `k--`
3. If any elements left in `nums2`, copy them into `nums1[0..j]`

---

## 🧑‍💻 Code (Python)

```python
def merge(nums1, m, nums2, n):
    i = m - 1
    j = n - 1
    k = m + n - 1

    while i >= 0 and j >= 0:
        if nums1[i] > nums2[j]:
            nums1[k] = nums1[i]
            i -= 1
        else:
            nums1[k] = nums2[j]
            j -= 1
        k -= 1

    # If nums2 is not exhausted
    while j >= 0:
        nums1[k] = nums2[j]
        j -= 1
        k -= 1
```

---

## ⏱️ Time and Space Complexity

| Metric | Complexity      |
| ------ | --------------- |
| Time   | O(m + n)        |
| Space  | O(1) (in-place) |

---

Let me know if you want the C++, JavaScript, or Java version too!
