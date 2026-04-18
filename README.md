# **Max Heap Implementation in C++**
### Overview
This project implements a Max Heap data structure from scratch in C++, complete with core heap operations and an in-place Heap Sort algorithm. The program runs as an interactive console menu, letting you insert, delete, display, and sort elements in real time.

### 📌 What is a Max Heap?
A Max Heap is a complete binary tree where every parent node holds a value greater than or equal to its children. The largest element always sits at the root (index 0). Internally, the heap is stored in a plain array — the tree structure is implied through index arithmetic:
**Relationship** | **Formula:**
____________________________________
Parent of        | i(i - 1) / 2
____________________________________
Left child of    | 2i * i + 1
____________________________________
Right child of   | i2 * i + 2
____________________________________
