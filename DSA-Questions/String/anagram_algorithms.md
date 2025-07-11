
# 🔠 Anagram Check Algorithms

This document describes **two approaches** to check if two strings are anagrams:
- Brute-force approach
- Optimized frequency table approach

---

## 🧪 Problem Statement

> Given two strings `s` and `t`, determine whether they are anagrams of each other.

An anagram is a word or phrase formed by rearranging the letters of another, using all the original letters exactly once.

---

## ✅ Assumptions

- The strings may contain any ASCII characters.
- The check is **case-sensitive** (e.g., `"Listen"` and `"Silent"` are **not** anagrams).

---

## 🐌 Brute-force Approach

### 📌 Algorithm Steps

```
1. Sort both strings.
2. Compare the sorted versions:
       → If they are equal, return true (they are anagrams)
       → Otherwise, return false
```

### 💻 Time & Space Complexity

| Category     | Value         |
|--------------|---------------|
| Time         | O(n log n)    |
| Space        | O(1) or O(n)  |

---

## ⚡ Optimized Frequency Table Approach

### 📌 Algorithm Steps

```
1. If the lengths of both strings are not equal:
       → Return false (they cannot be anagrams)

2. Create a frequency table (array) of size 256 (for ASCII characters), initialized to 0.

3. For each character 'ch' in string s:
       → Increment freqTable[ch] by 1

4. For each character 'ch' in string t:
       → Decrement freqTable[ch] by 1

5. For each element in freqTable:
       → If any value is not 0:
            → Return false (character mismatch)

6. If all frequencies are zero:
       → Return true (strings are anagrams)
```

### 💻 Time & Space Complexity

| Category     | Value              |
|--------------|-------------------|
| Time         | O(n)              |
| Space        | O(1) (fixed 256)  |

---

## 🎯 Summary

| Approach       | Time Complexity | Space Complexity | Description                  |
|----------------|------------------|-------------------|------------------------------|
| Brute-force    | O(n log n)       | O(1) or O(n)      | Simple, uses sorting         |
| Optimized      | O(n)             | O(1)              | Fast, uses ASCII frequency   |
