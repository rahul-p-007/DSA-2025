# 🔢 Next Permutation

## 📝 Problem Statement

Given an array of integers `nums` representing a permutation of numbers, rearrange the numbers into the **next lexicographically greater permutation** of numbers.

If such arrangement is not possible, rearrange it as the **lowest possible order** (i.e., sorted in ascending order).

- The replacement must be **in-place**.
- Use **only constant extra memory**.

---

## 🧠 Algorithm & Approach

This problem is based on the concept of finding the **next lexicographical permutation**.

### 💡 Intuition

If we were to generate all permutations and sort them, the next permutation would be the one that comes immediately after the current one.  
Instead of generating all permutations, we use the structure of the permutation to transform it directly.

---

## 🔍 Key Observations

1. A permutation is the **next** one if it is just **larger** than the current one.
2. To find it, we need to:
   - **Find a pair of two successive numbers `a[i]` and `a[i+1]`**, from the **end**, where `a[i] < a[i+1]`. This is called the **pivot**.
   - Then, find the **smallest number greater than `a[i]`** to the right of `a[i]` and **swap** them.
   - Finally, **reverse the sequence** after the original `i` to get the smallest next permutation.

---

## 🪜 Step-by-Step Algorithm

1. **Find the Pivot**:

   - Traverse the array from right to left and find the first index `i` such that `nums[i] < nums[i + 1]`.
   - If not found, reverse the whole array (it's the last permutation).

2. **Find the Successor**:

   - From the end of the array, find the first element `nums[j] > nums[i]`.
   - Swap `nums[i]` and `nums[j]`.

3. **Reverse the Suffix**:
   - Reverse the elements from `i + 1` to the end of the array.

---

## 🔁 Dry Run Example

### Input:

```
nums = [1, 2, 3]
```

### Process:

- Step 1: Pivot is at index 1 (2 < 3)
- Step 2: Swap 2 and 3 → [1, 3, 2]
- Step 3: Reverse from index 2 → [1, 3, 2]

### Output:

```
[1, 3, 2]
```

---

## ✅ C++ Code

```cpp
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();

        // Step 1: Find the pivot
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot found, reverse the entire array
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the rightmost element greater than nums[pivot]
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        int i = pivot + 1;
        int j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};
```

---

## ⏱️ Time and Space Complexity

| Metric           | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(1)  |

---

## 🧠 How to Approach These Types of Problems

1. **Understand the Pattern**:

   - Recognize if the problem is asking for the next/previous arrangement (permutation, order, etc.).

2. **Break into Logical Steps**:

   - What do you need to find? (Pivot)
   - What needs to be swapped?
   - What needs to be reversed?

3. **Think in Terms of Greedy or Two Pointers**:

   - Many permutation-based problems rely on greedy choices or two pointers for in-place modification.

4. **Dry Run on Small Examples**:

   - Helps visualize what’s happening step by step.

5. **Focus on Edge Cases**:
   - Already largest permutation
   - Already smallest permutation

---

# Algorithm: Finding the Next Permutation

This algorithm describes how to find the next lexicographically greater permutation of a given array `A`. If no such permutation exists (i.e., the array is already sorted in descending order), it rearranges the array to its lowest possible order (sorted in ascending order).

## Steps:

1.  ### Find the "Pivot" Element

    - **Definition:** The pivot is the **rightmost element `A[i]`** such that `A[i] < A[i+1]`.
    - **Process:** Iterate through the array from right to left (from index `n-2` down to `0`). The first element `A[i]` that satisfies `A[i] < A[i+1]` is your pivot.
    - **Special Case:** If no such pivot is found (meaning the entire array is sorted in descending order, e.g., `[5, 4, 3, 2, 1]`), then the current permutation is the largest possible. In this case, to get the "next" permutation, you must rearrange the array to its smallest possible order (sort it in ascending order). This is typically done by reversing the entire array.

2.  ### Find the "Rightmost Element" Greater than Pivot and Swap

    - **Definition:** After finding the pivot `A[i]`, identify the **rightmost element `A[j]`** in the subarray `A[i+1...n-1]` (the part of the array to the right of the pivot) that is **greater than the pivot `A[i]`**.
    - **Process:** Iterate from the rightmost end of the array (`n-1`) towards `i+1`. The first element `A[j]` you encounter such that `A[j] > A[i]` is the element you're looking for.
    - **Swap:** Swap the pivot element `A[i]` with this found `Rightmost Element` `A[j]`.

3.  ### Reverse the Suffix
    - **Definition:** After the swap, the subarray to the right of the original pivot's position (i.e., from `pivot_index + 1` to the end of the array `n-1`) needs to be rearranged.
    - **Process:** **Reverse** the subarray starting from `A[pivot_index + 1]` up to `A[n-1]`. This part of the array was originally in decreasing order (due to how the pivot was found) and, after the swap, reversing it will put it into the smallest possible (increasing) order, thus ensuring the overall permutation is the _next_ lexicographically greater one.

---

**Example Walkthrough:**

Let's take `A = [1, 5, 8, 4, 7, 6, 5, 3, 1]`

1.  **Find Pivot:**

    - Start from `i = 7` (`A[7]=3`). `A[7] < A[8]` (`3 < 1`) is false.
    - `i = 6` (`A[6]=5`). `A[6] < A[7]` (`5 < 3`) is false.
    - `i = 5` (`A[5]=6`). `A[5] < A[6]` (`6 < 5`) is false.
    - `i = 4` (`A[4]=7`). `A[4] < A[5]` (`7 < 6`) is false.
    - `i = 3` (`A[3]=4`). `A[3] < A[4]` (`4 < 7`) is **true**!
    - **Pivot found:** `A[3]` (which is `4`). `pivot_index = 3`.

2.  **Find Rightmost Element > Pivot and Swap:**

    - Pivot is `4`. We look in `A[4...8]` (`[7, 6, 5, 3, 1]`) for the rightmost element greater than `4`.
    - From right to left: `A[8]=1` (not > 4), `A[7]=3` (not > 4), `A[6]=5` (is > 4!).
    - **Rightmost Element:** `A[6]` (which is `5`).
    - **Swap `A[3]` (4) and `A[6]` (5):**
      - Array becomes `[1, 5, 8, 5, 7, 6, 4, 3, 1]`

3.  **Reverse Suffix:**
    - Reverse the subarray from `pivot_index + 1` (`3 + 1 = 4`) to the end (`n-1`).
    - Reverse `A[4...8]` (which is `[7, 6, 4, 3, 1]`).
    - After reversing, `[7, 6, 4, 3, 1]` becomes `[1, 3, 4, 6, 7]`.
    - **Final Array:** `[1, 5, 8, 5, 1, 3, 4, 6, 7]`

## 📌 Summary

- Efficient, in-place solution.
- Based on pattern recognition and logical decomposition.
- Common in coding interviews and algorithm practice.
