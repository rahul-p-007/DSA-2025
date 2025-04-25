# 🔹 Bit Manipulation

**Bit Manipulation** refers to the process of directly manipulating bits (0s and 1s) of data in variables. In programming, **bitwise operators** are used to perform operations on individual bits of integers. Bit manipulation is a powerful technique that can lead to more efficient algorithms and is frequently used in problems that require optimization.

---

## 🧠 Key Concepts of Bit Manipulation

- **Bit**: The most basic unit of data in a computer, either 0 or 1.
- **Byte**: 8 bits grouped together.
- **Bitwise Operators**: Operators that work at the bit level, allowing you to manipulate individual bits.
- **Integer Representation**: Computers represent integers in binary (base 2), which is crucial in understanding how bit manipulation works.

### Bitwise Operators:

1. **AND (`&`)**: Performs a bitwise AND operation. Each bit in the result is `1` if both corresponding bits are `1`, otherwise `0`.
   - Example: `5 & 3` → `0101 & 0011 = 0001` (1)
2. **OR (`|`)**: Performs a bitwise OR operation. Each bit in the result is `1` if at least one of the corresponding bits is `1`.
   - Example: `5 | 3` → `0101 | 0011 = 0111` (7)
3. **XOR (`^`)**: Performs a bitwise XOR (exclusive OR) operation. Each bit in the result is `1` if exactly one of the corresponding bits is `1`, otherwise `0`.
   - Example: `5 ^ 3` → `0101 ^ 0011 = 0110` (6)
4. **NOT (`~`)**: Inverts all the bits in the number (flips 1s to 0s and vice versa).
   - Example: `~5` → `~0101 = 1010` (-6 in two’s complement representation)
5. **Left Shift (`<<`)**: Shifts the bits of a number to the left by a specified number of positions. Each left shift operation doubles the number.
   - Example: `5 << 1` → `0101 << 1 = 1010` (10)
6. **Right Shift (`>>`)**: Shifts the bits of a number to the right by a specified number of positions. Each right shift operation halves the number.
   - Example: `5 >> 1` → `0101 >> 1 = 0010` (2)

---

## 🔍 Applications of Bit Manipulation

Bit manipulation is useful in a wide range of applications, particularly when optimizing for time and space in problems that involve integers or binary data.

### 1. **Checking if a Number is Even or Odd**

One of the simplest uses of bit manipulation is checking whether a number is even or odd. You can check the least significant bit (LSB) using the **AND** operator.

- **Even**: `n & 1 == 0`
- **Odd**: `n & 1 == 1`

#### Example:

```cpp
int n = 5;
if (n & 1) {
    cout << "Odd";
} else {
    cout << "Even";
}
```

### 2. **Count Set Bits (Hamming Weight)**

You can count the number of `1` bits (set bits) in a binary number using bit manipulation. This is useful in problems related to binary numbers and efficient counting.

#### Algorithm:

1. **Brian Kernighan's Algorithm**: This method repeatedly turns off the rightmost `1` bit in the number.

   ```cpp
   int countSetBits(int n) {
       int count = 0;
       while (n) {
           n = n & (n - 1);  // Remove the rightmost set bit
           count++;
       }
       return count;
   }
   ```

### 3. **Swap Two Numbers without a Temporary Variable**

You can swap two numbers without using a temporary variable by using the **XOR** operator.

#### Algorithm:

```cpp
a = a ^ b;
b = a ^ b;  // b now contains the original value of a
a = a ^ b;  // a now contains the original value of b
```

### 4. **Finding the Next Power of 2**

You can determine if a number is a power of two using the following method. If a number `n` is a power of two, it has exactly one set bit.

- **Power of 2 Check**: `n & (n - 1) == 0` (except when `n == 0`)

#### Example:

```cpp
int isPowerOfTwo(int n) {
    return (n & (n - 1)) == 0 && n > 0;
}
```

### 5. **Bitwise Representation of Numbers**

You can manipulate individual bits of a number to represent values like flags, masks, and binary data. This is useful in problems where you need to store multiple boolean values within a single integer.

#### Example:

Setting, clearing, and toggling individual bits:

```cpp
int setBit(int n, int i) {
    return n | (1 << i);  // Set the ith bit to 1
}

int clearBit(int n, int i) {
    return n & ~(1 << i);  // Set the ith bit to 0
}

int toggleBit(int n, int i) {
    return n ^ (1 << i);  // Toggle the ith bit
}

int checkBit(int n, int i) {
    return (n & (1 << i)) != 0;  // Check if the ith bit is 1
}
```

### 6. **Finding the Rightmost Set Bit**

To find the rightmost set bit (the least significant `1` bit) of a number, you can use the following method:

```cpp
int rightmostSetBit(int n) {
    return n & -n;  // Return the rightmost set bit
}
```

### 7. **Reversing Bits**

Reversing the bits of a number is another common problem in bit manipulation. This can be done efficiently using bit shifts and bitwise OR operations.

#### Algorithm:

```cpp
unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    int i;
    for (i = 0; i < 32; i++) {
        rev <<= 1;  // Shift the reversed number left
        rev |= (n & 1);  // Add the last bit of n to rev
        n >>= 1;  // Shift n right
    }
    return rev;
}
```

---

## 🚀 Advantages of Bit Manipulation

- **Efficiency**: Bitwise operations are often much faster than regular arithmetic operations, especially when working with large numbers.
- **Space Optimization**: Bit manipulation allows you to store multiple boolean values within a single integer, which can save memory.
- **Low-Level Control**: Bit manipulation gives programmers low-level control over the binary representation of data, which is useful in systems programming, cryptography, and low-latency applications.

---

## 🧩 Challenges of Bit Manipulation

- **Complexity**: Bit manipulation can sometimes be difficult to reason about and understand, especially when dealing with large numbers or complicated expressions.
- **Platform Dependent**: The behavior of some bitwise operations (like signed number representation) may vary between different platforms or compilers.
- **Error-Prone**: Improper use of bitwise operations can easily lead to logical errors, especially when working with negative numbers or large values.

---

## ✅ Summary

- **Bit Manipulation** is the process of performing operations on individual bits of numbers using bitwise operators.
- Common operations include **AND**, **OR**, **XOR**, **NOT**, **left/right shift**, and bitwise counting techniques.
- Bit manipulation is particularly useful for problems involving **binary representations**, **set bits**, and **optimization**.
- It helps in achieving **efficient algorithms** with low time and space complexity, especially in problems where other techniques might be too slow or memory-intensive.

---

## 💡 When to Use Bit Manipulation

Use bit manipulation when:

- You need to **optimize performance** for integer operations, especially when working with large data sets.
- You need to manipulate or check individual bits in numbers (e.g., setting flags, checking powers of two).
- The problem involves working with **binary numbers**, **masks**, **set operations**, or **bitwise patterns**.
