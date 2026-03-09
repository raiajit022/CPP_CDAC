#include "Mystring.h"
#include <iostream>
#include <cstring> // For strlen and strcpy

// Default constructor
Mystring::Mystring() {
    size = 0;
    p = new char[1]; // Allocate minimum memory for the null terminator
    p[0] = '\0';
}

// Parameterized constructor (using a specific size provided by the user)
Mystring::Mystring(int s) {
    size = s;
    p = new char[size + 1]; // +1 to accommodate the null terminator '\0'
    p[0] = '\0';            // Initialize as empty stringMystring
}

// Parameterized constructor 
Mystring::Mystring(const char* str) {
    size = strlen(str);
    p = new char[size + 1];
    strcpy(p, str);
}

// Copy Constructor (Deep Copy)
Mystring::Mystring(const Mystring& obj) {
    size = obj.size;
    p = new char[size + 1];
    strcpy(p, obj.p); // Copy actual data, not just the pointer address
}

// Destructor for clean-up
Mystring::~Mystring() {
    delete[] p; // Compulsory use of delete[] to avoid memory leaks
}

// Display function
void Mystring::display() const {
    std::cout << p << std::endl;
}

// Function to take string input from the user into the allocated memory
void Mystring::input() {
    // std::cin >> p works for a single word. 
    std::cin >> p; 
}