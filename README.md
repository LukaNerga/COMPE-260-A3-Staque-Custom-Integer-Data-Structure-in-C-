# Staque – Stack/Queue Hybrid Data Structure 📚

## Project Description

This project implements a custom **Staque** data structure in **C++** using a **doubly linked list**.

A **Staque** behaves like a mix between a **stack** and a **queue**:
- **Even numbers** are inserted at the **front**
- **Odd numbers** are inserted at the **back**
- Supports flexible removal operations:
  - Remove last added item (LIFO style from the back)
  - Remove a specific number of items
  - Remove only even or only odd items

This demonstrates:
- Custom data structures
- Dynamic memory management
- Copy constructor and assignment operator (Rule of Three)
- Overloaded methods for different removal behaviors

---

## Data Structure Overview

### Node

Each node in the linked list stores:

- `data` – integer value
- `next` – pointer to the next node
- `prev` – pointer to the previous node

The nodes are connected in a **doubly linked list**, allowing efficient traversal and removal from both ends.

---

### Staque Class

The `Staque` class manages the linked list and provides the main functionality.

#### Internal Pointers

- `front` – points to the first node (head)
- `back` – points to the last node (tail)

#### Key Operations

1. **Constructor**
   - Initializes an empty Staque (`front = nullptr`, `back = nullptr`).

2. **Copy Constructor**
   - Creates a **deep copy** of another `Staque`.
   - Iterates through the source list and inserts copies of all elements.

3. **Destructor**
   - Traverses from `front` to `back` and deletes every node.
   - Frees all dynamically allocated memory.

4. **Assignment Operator (`operator=`)**
   - Handles self-assignment safely.
   - Clears the existing list.
   - Deep copies the contents of another `Staque`.
   - Prevents memory leaks and double frees.

---

## Insertion Logic

### `insert(int value)`

Insertion is based on **parity**:

- If `value` is **even**:
  - Insert at the **front**.
  - If the list is empty, both `front` and `back` point to the new node.
  - Otherwise, the new node becomes the new `front`.

- If `value` is **odd**:
  - Insert at the **back**.
  - If the list is empty, both `front` and `back` point to the new node.
  - Otherwise, the new node is appended after `back` and becomes the new `back`.

This creates a structure where:
- Evens accumulate towards the front.
- Odds accumulate towards the back.

---

## Display Logic

### `display() const`

Prints the Staque from **front to back** in the format:

```text
(front) 2 4 6 9 11 (back)
