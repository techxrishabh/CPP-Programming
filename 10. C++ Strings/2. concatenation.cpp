// String concatenation
// The + operator can be used between strings to add them together to make a new string. This is called concatenation.

#include <iostream>
using namespace std;
int main(){
    string firstName = "Rishabh";
    string lastName = "Kumar";
    string fullName = firstName + " " + lastName;
    cout << fullName << "\n";

    // Append
    // A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function

    string first = "John ";
    string last = "Cina";
    cout << first.append(last);

}