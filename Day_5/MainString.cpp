#include <iostream>
#include "Mystring.h"

int main() {
    std::cout << "--- 1. Default Constructor ---" << std::endl;
    Mystring str1;
    std::cout << "str1: ";
    str1.display();

    std::cout << "\n--- 2. Parameterized Constructor ---" << std::endl;
    Mystring str2("Hello World");
    std::cout << "str2: ";
    str2.display();

    std::cout << "\n--- 3. Allocate Memory Dynamically & Get Size From User ---" << std::endl;
    int userSize;
    std::cout << "Enter the maximum size for your new string: ";
    std::cin >> userSize;
    
    // Call Parameterized Constructor with user size
    Mystring str3(userSize); 
    
    std::cout << "Enter a word (max " << userSize << " characters): ";
    str3.input();
    
    std::cout << "str3: ";
    str3.display();

    std::cout << "\n--- 4. Copy Constructor ---" << std::endl;
   
    Mystring str4 = str3; 
    std::cout << "str4 (Copied from str3): ";
    str4.display();

    std::cout << "\nEnd of program. Destructors will now clean up memory!" << std::endl;
    // When main ends, the destructor (~MyString) is automatically called for str1, str2, str3, and str4.
    
    return 0;
}