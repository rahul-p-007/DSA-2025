# 🔄 Sorting Algorithms

Sorting algorithms are used to arrange data in a specific order, typically in **ascending** or **descending** order. Sorting plays an essential role in computer science, as many algorithms rely on sorted data for efficiency and correctness.

There are several types of sorting algorithms, each with its own advantages and trade-offs in terms of time and space complexity. Below, we'll explore some of the most commonly used sorting algorithms.

---

## 🧠 Types of Sorting Algorithms

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**
4. **Merge Sort**
5. **Quick Sort**
6. **Heap Sort**
7. **Counting Sort**
8. **Radix Sort**
9. **Bucket Sort**

---

## 1. **Bubble Sort**

### Concept:

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

### Time Complexity:

- **Best case**: `O(n)` (when the array is already sorted)
- **Average and worst case**: `O(n^2)`

### Space Complexity:

- `O(1)` (in-place sorting)

### Code Example (C++):

```cpp
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
```

---

## 2. **Selection Sort**

### Concept:

Selection Sort selects the smallest element from the unsorted part of the array and swaps it with the first unsorted element. It continues this process until the entire array is sorted.

### Time Complexity:

- **Best, average, and worst case**: `O(n^2)`

### Space Complexity:

- `O(1)` (in-place sorting)

### Code Example (C++):

```cpp
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
```

---

## 3. **Insertion Sort**

### Concept:

Insertion Sort builds the final sorted array one element at a time. It takes each element from the unsorted part and places it in the correct position in the sorted part of the array.

### Time Complexity:

- **Best case**: `O(n)` (when the array is already sorted)
- **Average and worst case**: `O(n^2)`

### Space Complexity:

- `O(1)` (in-place sorting)

### Code Example (C++):

```cpp
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

---

## 4. **Merge Sort**

### Concept:

Merge Sort is a **divide and conquer** algorithm. It divides the array into two halves, recursively sorts both halves, and then merges them back together in sorted order.

### Time Complexity:

- **Best, average, and worst case**: `O(n log n)`

### Space Complexity:

- `O(n)` (requires additional space for merging)

### Code Example (C++):

```cpp
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < n1) arr[k++] = leftArr[i++];
    while (j < n2) arr[k++] = rightArr[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```

---

## 5. **Quick Sort**

### Concept:

Quick Sort is another **divide and conquer** algorithm. It selects a **pivot** element and partitions the array around the pivot, recursively sorting the subarrays.

### Time Complexity:

- **Best and average case**: `O(n log n)`
- **Worst case**: `O(n^2)` (when the pivot is poorly chosen)

### Space Complexity:

- `O(log n)` (recursive call stack)

### Code Example (C++):

```cpp
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

---

## 6. **Heap Sort**

### Concept:

Heap Sort works by first converting the array into a **max heap** (for descending order) or **min heap** (for ascending order), and then repeatedly extracting the maximum or minimum element from the heap.

### Time Complexity:

- **Best, average, and worst case**: `O(n log n)`

### Space Complexity:

- `O(1)` (in-place sorting)

### Code Example (C++):

```cpp
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
```

---

## 7. **Counting Sort**

### Concept:

Counting Sort is a non-comparative sorting algorithm that counts the occurrences of each element and uses this information to place elements in their correct position.

### Time Complexity:

- **Best, average, and worst case**: `O(n + k)` where `n` is the number of elements and `k` is the range of the input.

### Space Complexity:

- `O(n + k)`

---

## Summary of Sorting Algorithms:

| Algorithm          | Best Time  | Worst Time | Space Complexity |
| ------------------ | ---------- | ---------- | ---------------- |
| **Bubble Sort**    | O(n)       | O(n^2)     | O(1)             |
| **Selection Sort** | O(n^2)     | O(n^2)     | O(1)             |
| **Insertion Sort** | O(n)       | O(n^2)     | O(1)             |
| **Merge Sort**     | O(n log n) | O(n log n) | O(n)             |
| **Quick Sort**     | O(n log n) | O(n^2)     | O(log n)         |
| **Heap Sort**      | O(n log n) | O(n log n) | O(1)             |
| **Counting Sort**  | O(n + k)   | O(n + k)   | O(n + k)         |

---

## ✅ Summary

- **Bubble Sort, Selection Sort, and Insertion Sort** are simple, intuitive algorithms but inefficient for large datasets due to their `O(n^2)` complexity.
- **Merge Sort** and **Quick Sort** are efficient `O(n log n)` algorithms and are often preferred for large datasets.
- **Heap Sort** is another `O(n log n)` algorithm, with the advantage of being **in-place**.
- **Counting Sort** is efficient when the range of numbers is small and when the input consists of non-negative integers.

Sorting algorithms are fundamental in **Data Structures and Algorithms (DSA)**, and understanding their differences helps in choosing the right one for a given problem.
