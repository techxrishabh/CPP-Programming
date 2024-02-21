// c++ Structures
// Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

// Unlike an array, a structure can contain many different data types (int, string, bool, etc.).


#include <iostream>
using namespace std;
int main(){

    // Create a Structure
    // To create a structure, use the struct keyword and declare each of its members inside curly braces.

    // After the declaration, specify the name of the structure variable (myStructure in the example below):


    struct {     // structure declaration

        int myNum;    // member (int variable)
        string myString;    // member (string variable)

    } myStructure;      // created a structure variable named myStructure


    // assign value to the member of myStructure

    myStructure.myNum = 70;
    myStructure.myString = "Hello-World";


    cout << myStructure.myNum << "\n";      // 70
    cout << myStructure.myString << "\n";   // Hello-World


}