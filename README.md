Staque – Custom Integer Data Structure in C++

Author: Luka Nergadze
Language: C++

Description

This project implements a custom data structure called Staque that stores integers using a doubly linked list.

Insertion rules:

Even numbers → pushed to the front

Odd numbers → pushed to the back

Removal rules:

Always follows LIFO (Last In, First Out)

Three removal methods:

remove() – removes the last-added item

remove(int count) – removes a specified number of items from the back

remove(int count, bool removeEven) – removes a specified number of even or odd items

The class also includes:

Copy constructor – deep copy of Staque

Overloaded assignment operator – ensures safe assignment

Destructor – prevents memory leaks

How to Use

Clone or download the repository.

Compile the program:

g++ -o staque main.cpp


Run the program:

./staque


The program demonstrates:

Inserting integers

Displaying the Staque

Performing multiple types of removals

Using the copy constructor and assignment operator

Example Output

Initial Staque:

Insert sequence: 1, 3, 2, 4, 6, 8, 9
(front) 8 6 4 2 1 3 9 (back)


After removing 2 even and 1 odd numbers (LIFO):

(front) 4 2 1 3 (back)


New Staque with different inputs (5, 12, 7, 18, 3):

New Staque s2: (front) 18 12 5 7 3 (back)
After removals: (front) 18 5 7 (back)


Testing Copy Constructor and Assignment Operator:

Copied Staque s3 from s1: (front) 4 2 1 3 (back)
Assigned Staque s3 from s2: (front) 18 5 7 (back)

Files

main.cpp – contains Staque class and the driver program testing all functionality

Features

Doubly linked list implementation for flexible insertion and deletion

Dynamic memory management with deep copying

Multiple removal methods for flexible LIFO-based operations

Robust handling of even and odd numbers

Supports multiple test scenarios

License

This project is open-source and free to use for learning and academic purposes.
