// User Input Strings
// It is possible to use the extraction operator >> on cin to store a string entered by a user:

#include <iostream>
using namespace std;
int main(){

    // cin can store string till one word only after a whitespace it will not take any input

    string firstName;
    cout << "Enter your First Name : ";
    cin >> firstName;
    cout << "Your first name is : " << firstName << "\n";

    // However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words):


    // That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:

    string fullName;
    cout << "Enter your fullName : ";
    getline (cin, fullName);
    cout << "Your fullName is : " << fullName; 
}
