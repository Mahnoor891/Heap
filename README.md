# **Max Heap Implementation in C++**
### Overview
This project implements a Max Heap data structure from scratch in C++, complete with core heap operations and an in-place Heap Sort algorithm. The program runs as an interactive console menu, letting you insert, delete, display, and sort elements in real time.

### 📌 What is a Max Heap?
A Max Heap is a complete binary tree where every parent node holds a value greater than or equal to its children. The largest element always sits at the root (index 0). Internally, the heap is stored in a plain array — the tree structure is implied through index arithmetic:

|**Relationship**| **Formula:**|
|----------------|-------------|
| Parent of      | i(i - 1) / 2|
| Left child of  | 2i * i + 1  |
| Right child of | i2 * i + 2  |

### Core Functions
#### **1. UpHeapify(int idx)**
Called after insertion. Compares the newly added element at idx with its parent and bubbles it upward until the heap property is restored.
**Runs recursively from child → root**

**Time complexity: O(log n)**


#### **2. DownHeapify(int i, int size)**
Called after deletion. Pushes the element at index i downward by repeatedly swapping it with the larger of its two children, until it reaches its correct position.

Compares left and right children, swaps with the largest

Runs recursively from root → leaf

**Time complexity: O(log n)**


#### **3. insert(int val)**
Inserts a new value into the heap:

**Places the value at the next available index (arr[n])**

**Calls UpHeapify(n) to restore the heap property**

**Increments n**


⚠️ The heap is capped at 7 elements (int arr[7]). Insertion is blocked when full.


#### **4. Delete()**
Removes the maximum element (the root):

Swaps arr[0] (root/max) with arr[n-1] (last element)
Decrements n to logically remove the last element
Calls DownHeapify(0, n) to restore the heap property


**Time complexity: O(log n)**


#### **5. Display()**
Prints the current heap contents in array order (level-order traversal of the tree), from index 0 to n-1.

#### **6. HeapSort()**
Sorts the heap array in ascending order in-place:

Repeatedly swaps the root (max) with the last unsorted element
Shrinks the logical heap size (n--)
Calls DownHeapify to fix the heap after each swap
Restores n to original and prints the sorted array


**Time complexity: O(n log n)**

**Space complexity: O(1) — fully in-place**

