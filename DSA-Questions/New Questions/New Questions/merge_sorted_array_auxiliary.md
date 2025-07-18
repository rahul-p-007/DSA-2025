# 📘 Merge Sorted Arrays (Using Auxiliary Space)

## 🔧 Problem Statement

Merge two sorted integer arrays, `nums1` (with `m` elements) and `nums2` (with `n` elements), into `nums1` such that `nums1` becomes a single sorted array containing all `m + n` elements.  
`nums1` is guaranteed to have enough space (its size is `m + n`).

---

## 💡 Core Idea

The algorithm uses a **temporary auxiliary array** to store merged results.  
It compares elements from both arrays and places the smaller one into the temporary array.  
Finally, the merged result is copied back into `nums1`.

---

## 🧭 Detailed Steps

### 1. Initialization

- `i`: Points to current element in `nums1` (starts at `0`)
- `j`: Points to current element in `nums2` (starts at `0`)
- `k`: Points to current position in the `temp` array (starts at `0`)
- Create a `std::vector<int> temp(m + n)` to store the result

---

### 2. Merging Phase

- While `i < m` and `j < n`:
  - If `nums1[i] <= nums2[j]`:  
    `temp[k] = nums1[i]`, then increment `i`
  - Else:  
    `temp[k] = nums2[j]`, then increment `j`
  - Increment `k` after each operation

---

### 3. Copy Remaining Elements

#### From `nums1` (if any):
- While `i < m`:
  - `temp[k] = nums1[i]`
  - Increment both `i` and `k`

#### From `nums2` (if any):
- While `j < n`:
  - `temp[k] = nums2[j]`
  - Increment both `j` and `k`

---

### 4. Copy Result Back to `nums1`

- For `x = 0 to m + n - 1`:
  - `nums1[x] = temp[x]`

---

## 🧪 Dry Run Example

### Input:
```
nums1 = [1, 2, 3, 0, 0, 0], m = 3  
nums2 = [2, 5, 6], n = 3
```

### Execution:

1. Compare 1 and 2 → temp = [1]
2. Compare 2 and 2 → temp = [1, 2]
3. Compare 3 and 2 → temp = [1, 2, 2]
4. Compare 3 and 5 → temp = [1, 2, 2, 3]
5. Append remaining 5, 6 → temp = [1, 2, 2, 3, 5, 6]

### Final `nums1`:
```
[1, 2, 2, 3, 5, 6]
```

---

## ⏱️ Complexity Analysis

| Metric             | Value       |
|--------------------|-------------|
| Time Complexity    | O(m + n)    |
| Space Complexity   | O(m + n)    |

- The algorithm touches each element once: O(m + n)
- Additional memory `temp` of size `m + n`: O(m + n)

---

## ✅ Summary

This method is easy to implement and avoids complex pointer logic by using auxiliary space.  
However, if in-place merging with **O(1)** extra space is needed, consider using a two-pointer approach from the **end** instead.