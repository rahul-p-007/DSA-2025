# 🔍 Binary Search Algorithm

**Binary Search** is an efficient algorithm to search for an element in a **sorted** array. It works by repeatedly dividing the search interval in half.

---

## 🧠 Concept

- Start with the entire array.
- Compare the **middle element** with the target.
- If it matches — you're done.
- If the target is **less than** the middle — search in the **left half**.
- If the target is **greater than** the middle — search in the **right half**.
- Repeat until the target is found or the range becomes empty.

---

## ⏱️ Time and Space Complexity

| Operation        | Complexity |
| ---------------- | ---------- |
| Time (Best)      | `O(1)`     |
| Time (Avg/Worst) | `O(log n)` |
| Space            | `O(1)`     |

---

## 📌 Conditions

- The array **must be sorted**.
- Works only on **monotonic data** (increasing or decreasing).

---

## 🔄 Iterative Approach (C++)

```cpp
int binarySearch(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // target not found
}
```

---

## 🔁 Recursive Approach (C++)

```cpp
int binarySearch(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1;

    int mid = low + (high - low) / 2;

    if (nums[mid] == target) return mid;
    else if (nums[mid] < target)
        return binarySearch(nums, mid + 1, high, target);
    else
        return binarySearch(nums, low, mid - 1, target);
}
```

---

## 🔄 Use Cases

- Searching in **sorted arrays**
- Finding:
  - First/last occurrence
  - Number of occurrences
  - Lower/upper bounds
  - Square root of a number
  - Element in a **rotated sorted array**
  - Peak element in a mountain array

---

## 🧪 Example Walkthrough

Array: `[1, 3, 5, 7, 9]`  
Target: `7`

Steps:

```
low = 0, high = 4 → mid = 2 → nums[2] = 5 → 5 < 7 → search right half
low = 3, high = 4 → mid = 3 → nums[3] = 7 → match found ✅
```

---

## ⚠️ Common Mistakes

- Forgetting to use `mid = low + (high - low) / 2` to avoid overflow.
- Using unsorted input.
- Infinite loop due to wrong conditions (`low < high` vs `low <= high`).
- Off-by-one errors in bounds.

---

## ✅ Summary

- Efficient for large, sorted data.
- Cuts the problem in half every step.
- Foundation for many advanced problems.

> **"Divide and conquer in its purest form."**
