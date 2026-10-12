# OOP-Pointers-Dynamic-Memory
SY B.Tech AIML OOP practical assignment: pointers, references, and dynamic memory allocation in C++.

# OOP Practical Assignment: Pointers, References and Dynamic Memory

## Student Details
- **Student Name:** Your Name
- **PRN:** Your PRN
- **Branch:** Artificial Intelligence and Machine Learning (AIML)
- **Year:** SY B.Tech
- **Subject:** Object-Oriented Programming (OOP)

## Problem Statements
1. Implement pointers and references in C++ using a real-life example.
2. Implement dynamic memory allocation and deallocation using `new` and `delete` operators.

## Objectives
- Understand pointers, references, and memory addresses.
- Modify variables using pointer and reference parameters.
- Allocate and deallocate memory dynamically in C++.
- Understand the importance of preventing memory leaks.

## Programs

### 1. Pointers and References
File: `pointers_references.cpp`

This program simulates a student's bank account. It demonstrates how a pointer accesses a variable through its memory address and how a reference modifies the original variable.

### 2. Dynamic Memory Allocation
File: `dynamic_memory.cpp`

This program dynamically allocates a Student object and an array of marks. It calculates the total and average marks and releases allocated memory using `delete` and `delete[]`.

## Technologies Used
- Programming Language: C++
- Standard Libraries: `iostream`, `string`
- Compiler: GCC (`g++`)
- Platform: Windows / VS Code / compatible C++ IDE

## How to Compile and Run

Compile the pointer and reference program:

```bash
g++ pointers_references.cpp -o pointers_references
```

Run on Windows:

```powershell
.\pointers_references.exe
```

Compile the dynamic memory program:

```bash
g++ dynamic_memory.cpp -o dynamic_memory
```

Run on Windows:

```powershell
.\dynamic_memory.exe
```

## Sample Test Cases

### Test Case 1: Pointers and References
- Initial balance: Rs. 5000
- Amount added using pointer: Rs. 1000
- Amount added using reference: Rs. 500
- Expected final balance: Rs. 6500

### Test Case 2: Dynamic Memory
- Number of students: 3
- Marks: 80, 90, 70
- Expected total: 240
- Expected average: 80

## Concepts Demonstrated
- Pointer declaration and initialization
- Address-of (`&`) and dereference (`*`) operators
- Reference parameters
- Dynamic allocation using `new` and `new[]`
- Memory deallocation using `delete` and `delete[]`
- Memory leak prevention

## Conclusion
The practical demonstrates how pointers and references provide access to existing variables and how dynamic memory allocation supports runtime data storage. It also demonstrates the importance of releasing dynamically allocated memory correctly.
