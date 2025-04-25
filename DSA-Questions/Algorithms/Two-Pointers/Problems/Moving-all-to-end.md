## 🚀 Two-Pointer Algorithm for Moving Zeroes

This algorithm efficiently moves all zeroes to the end of the array while keeping the order of non-zero elements intact — using in-place operations with **two pointers**.

---

### 🧠 Algorithm

1. Initialize two pointers:

   - `start = 0`: used to scan through each element.
   - `end = 0`: used to track the position where the next non-zero element should be placed.

2. Traverse the array:

   - While `start` is less than `nums.size()`:
     - If `nums[start]` is **non-zero**:
       - Swap `nums[start]` with `nums[end]`.
       - Increment `end` to move the pointer to the next insertion point.
     - Always increment `start` to continue the loop.

3. By the end of the loop:
   - All non-zero elements will be at the front in their original order.
   - All zeroes will be automatically moved to the end due to the swaps.

---

### 💡 Approach Summary

- We move each non-zero element to the earliest available position using the `end` pointer.
- If `start` and `end` are the same, swapping does nothing — which is efficient.
- Zeroes are naturally pushed to the end as non-zero elements overwrite the front.
- This is an **in-place**, stable solution.

---

### ⏱️ Time and Space Complexity

- **Time Complexity**: `O(n)` — single pass through the array.
- **Space Complexity**: `O(1)` — no extra memory used.

---

### 📌 How to Tackle Similar Problems

1. **Understand the Goal**:

   - Are you preserving the order?
   - Are you allowed to use extra space?

2. **Identify Patterns**:

   - If shifting or reordering elements **in-place**, think about using **two pointers**.
   - If removing or filtering items, consider one pass with a write pointer.

3. **Choose the Right Technique**:

   - Use **swap** if you want to keep all non-zero elements at the front.
   - Use **counting** or **sliding window** if you’re dealing with a condition-based array update.

4. **Dry Run** with a small array:
   - Helps you visualize the movement of pointers and the change in array.

---

### ✅ Example

Input:

```cpp
nums = [0, 1, 0, 3, 12]
```

After function call:

```cpp
nums = [1, 3, 12, 0, 0]
```

---

This method works for many problems involving rearranging elements in-place while keeping order.
