# 🔹 Monotonic Stack / Monotonic Queue

**Monotonic Stacks** and **Monotonic Queues** are specialized data structures that maintain a specific order of elements in a stack or queue, typically either in **increasing** or **decreasing** order. These data structures are very useful in problems where you need to maintain the relative order of elements while performing efficient operations like finding the **next greater** or **next smaller** element.

---

## 🧠 Key Concepts

### 1. **Monotonic Stack**

A **Monotonic Stack** is a stack where the elements are maintained in a strictly increasing or strictly decreasing order. The stack ensures that at any time, the elements inside it are either:

- **Monotonically increasing**: The current element is always larger than the element before it.
- **Monotonically decreasing**: The current element is always smaller than the element before it.

These stacks are useful when you need to find **next greater** or **next smaller** elements in a list or solve problems related to **span** or **range**.

#### Common Operations:

- **Push**: Push elements onto the stack while maintaining the desired order.
- **Pop**: Remove elements that no longer satisfy the condition.
- **Top**: Retrieve the current top element of the stack.

---

### 2. **Monotonic Queue**

A **Monotonic Queue** is similar to a Monotonic Stack but operates like a **queue**, where the elements are maintained in increasing or decreasing order as they enter and exit the queue.

Monotonic Queues are typically used in problems involving **sliding window** techniques, where you need to maintain a certain order of elements within a sliding window of fixed size.

#### Common Operations:

- **Push**: Insert elements into the queue while maintaining the desired order.
- **Pop**: Remove elements from the front or rear of the queue based on conditions.
- **Front/Back**: Retrieve the element at the front or rear of the queue.

---

## 🔍 Applications of Monotonic Stack/Queue

Monotonic Stacks and Queues are primarily used in **range-based problems**, **sliding window problems**, and problems where the order of elements matters. Below are some common use cases:

### 1. **Next Greater Element**

One of the classic problems where a monotonic stack is used is the **Next Greater Element** problem. Given an array, you need to find the **next greater element** for each element in the array.

#### Example:

Input: `[4, 5, 2, 10, 8]`

Output: `[5, 10, 10, -1, -1]`

Here, the **Next Greater Element** for `4` is `5`, for `5` is `10`, for `2` is `10`, and for `10` and `8`, there is no greater element, so the answer is `-1`.

#### Approach:

1. Traverse the array from right to left.
2. Use a stack to keep track of elements.
3. If the current element is smaller than the top of the stack, it’s the next greater element for all elements in the stack until we find one smaller.
4. Pop elements from the stack that are smaller than the current element.

### 2. **Previous Greater Element**

This is the reverse of the next greater element. Instead of finding the next greater element, you need to find the **previous greater element** for each element in the array.

#### Example:

Input: `[4, 5, 2, 10, 8]`

Output: `[-1, -1, 5, -1, 10]`

#### Approach:

1. Traverse the array from left to right.
2. Use a stack to maintain the **monotonic** order of elements in decreasing order.
3. For each element, check the stack to find the previous greater element.

### 3. **Sliding Window Maximum**

A classic problem where a **Monotonic Queue** is used is finding the maximum element in a sliding window of size `k` as it slides across the array.

#### Example:

Input: `nums = [1,3,-1,-3,5,3,6,7], k = 3`

Output: `[3, 3, 5, 5, 6, 7]`

#### Approach:

1. Use a deque (monotonic queue) to maintain the indices of the elements in a way that the largest element in the current window is at the front.
2. For each new element, remove elements that are smaller than the current element (as they will never be the maximum in the future windows).
3. Remove elements that are outside the current window.

### 4. **Monotonic Stack for Valid Parentheses**

Monotonic stacks are used to check if a sequence of parentheses (or brackets) is valid.

#### Example:

Input: `"{[()()]}"`

Output: `True`

#### Approach:

1. Push opening brackets onto the stack.
2. For closing brackets, check if the top of the stack is the corresponding opening bracket.
3. If not, the sequence is invalid.

---

## 🚀 Advantages of Monotonic Stack/Queue

- **Efficient**: Monotonic stacks and queues help in solving problems in linear time `O(n)` instead of a brute force approach, which may take quadratic time.
- **Optimal Space Usage**: These data structures often require less space compared to storing all intermediate results or using additional arrays.
- **Simple to Implement**: Monotonic stacks and queues are relatively easy to implement and often involve simple operations like `push`, `pop`, and `peek`.

---

## 🧩 Challenges of Monotonic Stack/Queue

- **Order Maintenance**: The most significant challenge is maintaining the correct order of elements as they are inserted and removed from the stack or queue. You must carefully decide when to pop elements from the stack or queue.
- **Limited Applicability**: While powerful, monotonic stacks and queues are useful only in specific problems. They work best in problems where **next greater**, **next smaller**, or similar operations are needed.

---

## ✅ Summary

- **Monotonic Stack** and **Monotonic Queue** are specialized data structures that maintain elements in a **monotonically increasing** or **decreasing** order.
- They are highly efficient for problems like **next greater element**, **sliding window maximum**, and **valid parentheses**.
- **Monotonic Stack** works best for problems that require finding elements in a strictly ordered sequence, while **Monotonic Queue** is useful in sliding window problems.
- These structures help in reducing time complexity from `O(n^2)` to `O(n)` in many cases.

---

## 💡 When to Use Monotonic Stack/Queue

Use monotonic stacks and queues when:

- You need to **maintain order** of elements while solving problems that involve ranges, next greater, or sliding window operations.
- Problems can be broken down into a series of comparisons where local optimization is possible.
- You want to **improve efficiency** in problems that would otherwise require nested loops or complex recursive approaches.
