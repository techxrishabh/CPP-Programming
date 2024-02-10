// The cout object, together with the << operator, is used to output values/print text

// New Lines

// To insert a new line, We can use the \n or <<endl character:


// Both \n and endl are used to break lines. However, \n is most used.
// But what is \n exactly?

// The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

#include <iostream>
using namespace std;
int main(){
    cout<<"Hello-World"<<endl;
    cout<<"Hello-World\n";
    cout<<"Hello-World";
}


// Escape Sequence 	                Description

// \t 	                        Creates a horizontal tab 

// \\ 	                        Inserts a backslash character (\) 
	
// \" 	                        Inserts a double quote character