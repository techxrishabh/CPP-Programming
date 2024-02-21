// Named Structures
// By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

// To create a named structure, put the name of the structure right after the struct keyword:

#include <iostream>
using namespace std;


struct car{
    string name;
    string model;
    int year;
};

int main(){
    // struct myDataType {  // This structure is named "myDataType"

    //     int myNum;
    //     string myString;
    // };

    // To declare a variable that uses the structure, use the name of the structure as the data type of the variable:

    car mycar1;
    car mycar2;

    mycar1.name = "Ford";
    mycar1.model = "mustang";
    mycar1.year = 1999;

    mycar2.name = "BMW";
    mycar2.model = "X5";
    mycar2.year = 1990;


    cout << mycar1.name << " " << mycar1.model << " " << mycar1.year << "\n";
    cout << mycar2.name << " " << mycar2.model << " " << mycar2.year << "\n";
    

    return 0;
    
}