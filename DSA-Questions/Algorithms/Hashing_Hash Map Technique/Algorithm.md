# 🔑 Hashing / Hash Map Techniques

**Hashing** is a technique used to store data in such a way that it allows for **fast access** to elements. A **Hash Map** (or **Hash Table**) is an associative data structure that stores key-value pairs, allowing for **efficient lookups**, **insertions**, and **deletions**.

---

## 🧠 Concept

A **Hash Map** uses a **hash function** to map a key to an index in an array (called a **bucket**). The hash function computes an index based on the key, and the value is stored at that index. This ensures that lookups, insertions, and deletions can be done in constant time, on average.

### Key Operations:

- **Insert**: Add a key-value pair to the hash map.
- **Search**: Look up a value using the key.
- **Delete**: Remove a key-value pair from the hash map.

---

## ⏱️ Time and Space Complexity

| Operation | Average Complexity | Worst-case Complexity |
| --------- | ------------------ | --------------------- |
| Insert    | `O(1)`             | `O(n)`                |
| Search    | `O(1)`             | `O(n)`                |
| Delete    | `O(1)`             | `O(n)`                |
| Space     | `O(n)`             | `O(n)`                |

In **average cases**, operations on hash maps (like insertion, search, and deletion) run in constant time (`O(1)`), but in the **worst case**, when many keys map to the same index (a **collision**), the time complexity can degrade to `O(n)`.

---

## 📌 Hash Collisions

**Hash collisions** occur when two keys hash to the same index in the array. There are various strategies to handle collisions:

1. **Chaining**: Store multiple elements at the same index using a linked list (or another structure).
2. **Open Addressing**: Find another index for the collided element (e.g., using **linear probing**, **quadratic probing**, or **double hashing**).

---

## 🧪 Code Implementation (C++)

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Creating a hash map (unordered_map in C++)
    unordered_map<string, int> hashMap;

    // Insert elements (key-value pairs)
    hashMap["apple"] = 2;
    hashMap["banana"] = 3;
    hashMap["cherry"] = 5;

    // Search for a value
    cout << "The value of 'apple' is: " << hashMap["apple"] << endl;

    // Check if key exists
    if (hashMap.find("banana") != hashMap.end()) {
        cout << "Key 'banana' found!" << endl;
    }

    // Delete a key-value pair
    hashMap.erase("cherry");

    // Iterate through all key-value pairs
    for (const auto& pair : hashMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```

### Explanation:

- **`unordered_map`**: This is a C++ implementation of a hash map, where elements are stored in key-value pairs.
- **Insert**: We insert key-value pairs using `hashMap[key] = value`.
- **Search**: Use `hashMap.find(key)` to check if a key exists and retrieve its value.
- **Delete**: Use `hashMap.erase(key)` to remove a key-value pair.
- **Iterate**: We use a range-based for loop to iterate through all key-value pairs.

---

## 🔄 Use Cases for Hash Maps

- **Counting Frequencies**: Hash maps are commonly used to count the frequency of elements in a collection.
  - Example: Counting the number of occurrences of words in a sentence.
- **Lookups in Constant Time**: Hash maps provide fast lookups for any key, making them ideal for problems that involve checking for existence or matching.

- **Caching / Memoization**: Hash maps are useful for storing results of expensive operations to avoid redundant calculations.

- **Grouping Data**: Hash maps can be used to group data based on some characteristic, such as categorizing items by their type or grouping numbers by their remainder when divided by a number.

---

## 💡 Common Techniques Using Hash Maps

### 1. **Two Sum Problem**

- **Problem**: Given an array of integers, find two numbers such that their sum is equal to a target.
- **Solution**: Use a hash map to store elements and check for the complement of the current element.

```cpp
bool twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hashMap.find(complement) != hashMap.end()) {
            return true; // Found the pair
        }
        hashMap[nums[i]] = i; // Store the current number and its index
    }
    return false;
}
```

### 2. **Group Anagrams**

- **Problem**: Group anagrams from a list of strings.
- **Solution**: Use the sorted version of each string as a key in the hash map.

```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> hashMap;
    for (string str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        hashMap[sortedStr].push_back(str);
    }

    vector<vector<string>> result;
    for (auto& entry : hashMap) {
        result.push_back(entry.second);
    }

    return result;
}
```

---

## ✅ Summary

- **Hash Maps** provide a fast and efficient way to store and retrieve data based on a key.
- Operations like **insertion**, **deletion**, and **searching** can be done in constant time on average.
- **Collisions** can be handled using strategies like **chaining** or **open addressing**.
- Hash maps are used in a variety of applications, from **counting frequencies** to solving complex algorithmic problems like **Two Sum** or **Group Anagrams**.
