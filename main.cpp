#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node* prev;
Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};
class Staque {
private:
Node* front;
Node* back;
public:
// Constructor to initialize an empty Staque
Staque() : front(nullptr), back(nullptr) {}
// Copy Constructor to create a deep copy of another Staque
Staque(const Staque& other) {
front = back = nullptr;
Node* temp = other.front;
while (temp) {
insert(temp->data);
temp = temp->next;
}
}
// Destructor to clean up dynamically allocated memory for the linked list
~Staque() {
while (front) {
Node* temp = front;
front = front->next;
delete temp;
}
}
// Overloaded Assignment Operator to handle deep copying and avoid memory leaks
Staque& operator=(const Staque& other) {
if (this == &other) return *this;
while (front) {
Node* temp = front;
front = front->next;
delete temp;
}
front = back = nullptr;
Node* temp = other.front;
while (temp) {
insert(temp->data);
temp = temp->next;
}
return *this;
}
// Insert method to add an integer based on its value (even to front, odd to back)
void insert(int value) {
Node* newNode = new Node(value);
if (value % 2 == 0) {
if (!front) front = back = newNode;
else {
newNode->next = front;
front->prev = newNode;
front = newNode;
}
} else {
if (!back) front = back = newNode;
else {
back->next = newNode;
newNode->prev = back;
back = newNode;
}
}
}
// Display method to print the Staque's contents from front to back
void display() const {
Node* temp = front;
cout << "(front) ";
while (temp) {
cout << temp->data << " ";
temp = temp->next;
}
cout << "(back)" << endl;
}
// Remove without parameters (last added item)
void remove() {
if (back) {
Node* temp = back;
if (back == front) front = back = nullptr;
else {
back = back->prev;
back->next = nullptr;
}
delete temp;
}
}
// Remove with 1 parameter (remove `count` items)
void remove(int count) {
while (count-- > 0 && back) {
remove();
}
}
// Remove with 2 parameters (remove `count` even or odd items)
void remove(int count, bool removeEven) {
Node* temp = removeEven ? front : back;
while (count > 0 && temp) {
Node* next = removeEven ? temp->next : temp->prev;
if ((removeEven && temp->data % 2 == 0) || (!removeEven && temp->data % 2 != 0))
{
if (temp == front) front = front->next;
if (temp == back) back = back->prev;
if (temp->prev) temp->prev->next = temp->next;
if (temp->next) temp->next->prev = temp->prev;
delete temp;
--count;
}
temp = next;
}
}
};
int main() {
Staque s1;
// Insert numbers in sequence as per problem description
s1.insert(1);
s1.insert(3);
s1.insert(2);
s1.insert(4);
s1.insert(6);
s1.insert(8);
s1.insert(9);
// Display initial Staque
cout << "Initial Staque: ";
s1.display();
// Remove 2 even and 1 odd number according to LIFO rule
s1.remove(2, true); // Remove 2 even numbers
s1.remove(1, false); // Remove 1 odd number
// Display after removals
cout << "After removals: ";
s1.display();
// Example with different input and removal sequence
Staque s2;
s2.insert(5);
s2.insert(12);
s2.insert(7);
s2.insert(18);
s2.insert(3);
cout << "\nNew Staque s2: ";
s2.display();
s2.remove(1, true); // Remove 1 even number
s2.remove(); // Remove last added item
cout << "After removals in s2: ";
s2.display();
// Test copy constructor
Staque s3(s1);
cout << "\nCopied Staque s3 from s1: ";
s3.display();
// Test assignment operator
s3 = s2;
cout << "Assigned Staque s3 from s2: ";
s3.display();
return 0;
}
