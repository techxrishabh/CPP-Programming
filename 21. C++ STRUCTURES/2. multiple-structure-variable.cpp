// One Structure in Multiple Variables

// You can use a comma (,) to use one structure in many variables:

// struct {
//   int myNum;
//   string myString;
// } myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas


// This example shows how to use a structure in two different variables:

#include <iostream>
using namespace std;
int main(){
    struct{
        string brand;
        string model;
        int year;

    }myCar1, myCar2; // We can add variables by separating them with a comma here

    // putting data into first variable

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2023;

    myCar2.brand = "Ford";
    myCar2.model = "mustang";
    myCar2.year = 2025;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

}