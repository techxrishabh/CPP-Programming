// Modify the Pointer Value

// You can also change the pointer's value. But note that this will also change the value of the original variable:

#include <iostream>
using namespace std;
int main(){

string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)

cout << food << "\n";   // pizza

// Output the memory address of food (0x6dfed4)

cout << &food << "\n";  // 0x62fef0

// Access the memory address of food and output its value (Pizza)

cout << *ptr << "\n";   // pizza

// Change the value of the pointer

*ptr = "Hamburger";     

// Output the new value of the pointer (Hamburger)

cout << *ptr << "\n";       // Hamburger

// Output the new value of the food variable (Hamburger)

cout << food << "\n";       // Hamburger

}