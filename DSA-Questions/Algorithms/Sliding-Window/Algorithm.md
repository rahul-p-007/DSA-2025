# 🔄 Sliding Window Technique

The **Sliding Window Technique** is a powerful approach used to reduce nested loops into a single loop, especially for problems dealing with **subarrays or substrings**.

---

## 🧠 Concept

- You create a **window** (a subrange) in the array and **slide** it across the array to inspect or compute something about the elements inside the window.
- It's highly efficient for solving **range-based problems** in linear time `O(n)`.

---

## ✅ When to Use

Use Sliding Window when:

- You're dealing with **contiguous subarrays or substrings**.
- You need to find the **maximum/minimum**, **sum**, or **count** within a range of fixed or variable length.
- Brute-force solution has **nested loops**.

---

## 📌 Types of Sliding Windows

### 1. **Fixed-size Sliding Window**

- The window size stays constant.
- Example use case: Maximum sum of subarray of size `k`.

### 2. **Variable-size Sliding Window**

- The window grows or shrinks dynamically based on a condition.
- Example use case: Longest substring without repeating characters.

---

## 🔍 Fixed-size Example

### Problem:

Find the maximum sum of a subarray of size `k`.

### Algorithm Steps:

1. Calculate the sum of the first `k` elements.
2. Slide the window by:
   - Subtracting the element going out of the window.
   - Adding the new element coming into the window.
3. Keep track of the maximum sum.

### Code (C++):

```cpp
int maxSum(vector<int>& arr, int k) {
    int windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];

    int maxSum = windowSum;
    for (int i = k; i < arr.size(); i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
```

---

## 🔍 Variable-size Example

### Problem:

Find the length of the longest subarray with sum ≤ `k`.

### Algorithm Steps:

1. Use two pointers `start` and `end` to define the window.
2. Expand the window by moving `end` and adding elements to `sum`.
3. If `sum > k`, shrink the window from `start` side.
4. Track the maximum window length when `sum <= k`.

---

## ⏱️ Time and Space Complexity

- **Time**: `O(n)` — Each element is visited at most twice.
- **Space**: `O(1)` — If no extra data structures are used (except optional variables).

---

## 💡 Benefits

- Replaces brute-force nested loops.
- Great for optimizing problems with constraints like "sum of subarray", "longest/shortest substring", etc.
- Very readable and intuitive once you master the pattern.

---

## 🧪 Practice Problems

- Maximum Sum Subarray of Size K
- Longest Substring Without Repeating Characters
- Minimum Size Subarray Sum
- Maximum Number of Vowels in a Substring of Given Length

---

## ✅ Summary

The Sliding Window is one of the most **important patterns** in DSA — it's simple, elegant, and turns inefficient brute-force solutions into fast and clean code.
