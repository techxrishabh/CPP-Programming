// Strings - Special Characters

// Because strings must be written within quotes, C++ will misunderstand this string, and generate an error:
// string txt = "We are the so-called "Vikings" from the north.";  // will give an error


// The solution to avoid this problem, is to use the backslash escape character.

// The backslash (\) escape character turns special characters into string characters:



// Escape character	                    Result	                Description

//   \'	                                   '	                Single quote

//   \"	                                   "	                Double quote

//   \\	                                   \	                Backslash


#include <iostream>
using namespace std;
int main(){
    string text = "We are the so called \"Vikings\" from the north.";
    cout << text;
}