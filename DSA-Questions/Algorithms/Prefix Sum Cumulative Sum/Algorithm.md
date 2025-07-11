# 📊 Prefix Sum / Cumulative Sum

**Prefix Sum** (also called **Cumulative Sum**) is a technique used to preprocess an array to allow **efficient queries** on the sum of elements in a range of the array. It's widely used for problems that involve **range sum queries**, as it helps reduce the time complexity from `O(n)` to `O(1)` for each query.

---

## 🧠 Concept

The **Prefix Sum Array** is an auxiliary array where each element at index `i` contains the sum of the array's elements from the beginning up to index `i`.

### How to Calculate:

1. Construct a new array `prefix[]` where:
   - `prefix[0] = arr[0]`
   - `prefix[i] = prefix[i-1] + arr[i]` for `i > 0`
2. The sum of any subarray `arr[l...r]` can then be computed as:
   - **Sum of elements between indices `l` and `r`** = `prefix[r] - prefix[l-1]` (if `l > 0`)
   - If `l = 0`, then the sum is simply `prefix[r]`.

---

## ⏱️ Time and Space Complexity

| Operation            | Complexity |
| -------------------- | ---------- |
| **Preprocessing**    | `O(n)`     |
| **Range Sum Query**  | `O(1)`     |
| **Space Complexity** | `O(n)`     |

The preprocessing step takes **linear time** to construct the prefix sum array, and each query is answered in **constant time**.

---

## 📌 Example Walkthrough

**Input Array**: `[1, 2, 3, 4, 5]`

### Step 1: Construct Prefix Sum Array

1. `prefix[0] = 1`
2. `prefix[1] = prefix[0] + arr[1] = 1 + 2 = 3`
3. `prefix[2] = prefix[1] + arr[2] = 3 + 3 = 6`
4. `prefix[3] = prefix[2] + arr[3] = 6 + 4 = 10`
5. `prefix[4] = prefix[3] + arr[4] = 10 + 5 = 15`

**Prefix Sum Array**: `[1, 3, 6, 10, 15]`

### Step 2: Query the Sum of Subarray `arr[1...3]`

The sum of elements between indices `1` and `3` (inclusive) is:

```
Sum = prefix[3] - prefix[0] = 10 - 1 = 9
```

---

## 🔄 Code Implementation (C++)

```cpp
vector<int> computePrefixSum(const vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

int rangeSumQuery(const vector<int>& prefix, int l, int r) {
    if (l == 0)
        return prefix[r];
    return prefix[r] - prefix[l - 1];
}
```

### Explanation:

- **`computePrefixSum`**: Computes the prefix sum array for a given input array.
- **`rangeSumQuery`**: Returns the sum of elements from index `l` to `r` using the prefix sum array.

---

## 💡 Use Cases

- **Range Sum Queries**: Answering questions like "What is the sum of elements between indices `l` and `r`?"
- **Prefix Sum Optimization**: When solving problems like "Subarray sum equals a given value," where you can compute the sum of any subarray in constant time.
- **Handling Multiple Queries**: In scenarios where you need to repeatedly calculate range sums, the prefix sum approach is highly efficient.

---

## 🧪 Practice Problems

- Find the sum of elements in a subarray.
- Range sum query problems in coding challenges.
- Subarray sum equals a given target (using prefix sums to reduce time complexity).

---

## ✅ Summary

- **Prefix Sum** is a **preprocessing technique** that allows **constant time** range sum queries.
- After an **O(n)** preprocessing step, any sum query on a subarray can be answered in **O(1)** time.
- The technique is commonly used in problems involving sums over subarrays or sequences.
