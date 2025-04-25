# 📈 Kadane’s Algorithm

**Kadane’s Algorithm** is an efficient algorithm used to find the **maximum sum of a contiguous subarray** within a one-dimensional numeric array. It works in **linear time**, making it one of the most optimal solutions for this problem.

---

## 🧠 Concept

The idea behind Kadane’s Algorithm is to use a **dynamic programming** approach to build up the maximum subarray sum. The key observation is that you can either extend the previous subarray or start a new subarray at the current position.

### Steps:

1. Initialize two variables:
   - `maxSoFar`: Tracks the maximum subarray sum found so far.
   - `maxEndingHere`: Tracks the maximum subarray sum ending at the current position.
2. Iterate through the array:

   - For each element `x`:
     - `maxEndingHere = max(x, maxEndingHere + x)`: Either start a new subarray at `x` or extend the previous subarray.
     - `maxSoFar = max(maxSoFar, maxEndingHere)`: Update the global maximum if necessary.

3. The result is stored in `maxSoFar`.

---

## ⏱️ Time and Space Complexity

| Operation | Complexity |
| --------- | ---------- |
| Time      | `O(n)`     |
| Space     | `O(1)`     |

The algorithm runs in **linear time** and uses only **constant space**.

---

## 📌 Example Walkthrough

**Input Array**: `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`

**Step-by-step**:

1. **Initial values**: `maxSoFar = -2`, `maxEndingHere = -2`
2. Start iterating:
   - At index 1 (`x = 1`):
     - `maxEndingHere = max(1, -2 + 1) = 1`
     - `maxSoFar = max(-2, 1) = 1`
   - At index 2 (`x = -3`):
     - `maxEndingHere = max(-3, 1 + (-3)) = -2`
     - `maxSoFar = max(1, -2) = 1`
   - At index 3 (`x = 4`):
     - `maxEndingHere = max(4, -2 + 4) = 4`
     - `maxSoFar = max(1, 4) = 4`
   - At index 4 (`x = -1`):
     - `maxEndingHere = max(-1, 4 + (-1)) = 3`
     - `maxSoFar = max(4, 3) = 4`
   - Continue until the end...

**Final result**: `maxSoFar = 6`, which corresponds to the subarray `[4, -1, 2, 1]`.

---

## 🧪 Code (C++)

```cpp
int maxSubArray(vector<int>& nums) {
    int maxSoFar = nums[0];
    int maxEndingHere = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}
```

---

## 💡 Key Observations

- Kadane’s Algorithm builds the solution incrementally by deciding whether to **extend the current subarray** or **start fresh** from the current element.
- It works even when the input array contains negative numbers, as it allows subarrays to reset.
- The **maximum sum subarray** may start anywhere in the array, and this algorithm captures that efficiently.

---

## ✅ Use Cases

Kadane's Algorithm is typically used for problems such as:

- Maximum Subarray Sum.
- Finding the maximum sum of a contiguous subarray in **financial data** (e.g., stock prices).
- **Dynamic programming** problems that involve sums over subarrays.

---

## ⚠️ Common Mistakes

- Forgetting to handle cases where all elements are negative. Kadane’s algorithm naturally handles this by keeping track of the maximum subarray sum seen so far.
- Not properly updating the global maximum (`maxSoFar`).

---

## ✅ Summary

- **Kadane’s Algorithm** is the **optimal solution** for the maximum subarray sum problem with `O(n)` time complexity and `O(1)` space complexity.
- It efficiently solves the problem by keeping track of two values: the maximum sum ending at the current position and the overall maximum sum.
