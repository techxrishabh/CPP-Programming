// Access Strings - we can access any character of the string by using the index number

#include <iostream>
using namespace std;
int main(){
    string myString = "Hello";
    myString[0] = 'Z';
    cout << myString << "\n";   // Zello
    cout << myString[2]; // l

}