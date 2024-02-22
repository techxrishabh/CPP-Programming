// C++ Functions 
// A function is a block of code which only runs when it is called.

// You can pass data, known as parameters, into a function.

// Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.


#include <iostream>
using namespace std;

void myfunction(){ // void means that the function does not have a return value
    cout << "Hello, Good Morning\n";
}

int main(){
    myfunction();
    myfunction();

}

// Function Declaration and Definition
// A C++ function consist of two parts:

// Declaration: the return type, the name of the function, and parameters (if any)
// Definition: the body of the function (code to be executed)


// void myFunction() { // declaration
//   / the body of the function (definition)
// }