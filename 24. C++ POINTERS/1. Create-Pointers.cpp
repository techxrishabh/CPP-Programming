// pointer
// A pointer however, is a variable that stores the memory address as its value.

// A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

#include <iostream>
using namespace std;
int main(){
    string food = "cake";
    string* ptr = &food;

    cout << food << "\n";   // cake
    cout << &food << "\n";  // 0x62fef0
    cout << ptr << "\n";    // 0x62fef0

}


// There are three ways to declare pointers 

// string* mystring; // Preferred
// string *mystring;
// string * mystring;