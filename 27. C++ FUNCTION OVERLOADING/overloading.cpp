// Function Overloading
// With function overloading, multiple functions can have the same name with different parameters:

#include <iostream>
using namespace std;


// Instead of defining two functions that should do the same thing, it is better to overload one.
// In the example below, we overload the plusFunc function to work for both int and double:


int myFunction(int x, int y){
    return x + y;
}
double myFunction(double x, double y){
    return x + y;
}



int main(){


    int num1 = myFunction(5, 8);
    double num2 = myFunction(3.9, 4.5);

    cout << num1 << "\n";   // 13
    cout << num2 << "\n";   // 8.4


    // Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.

}