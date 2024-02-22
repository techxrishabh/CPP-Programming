// Multiple Parameters
// Inside the function, you can add as many parameters as you want:

#include <iostream>
using namespace std;

void myFunction(string fname, int age){

    cout << "My name is " << fname << " " << "Kumar" << " " << "and" << " " << "my " << "age" << " is " << age << " Years." << "\n";

}

int main(){
    myFunction("Rishabh", 20);
    return 0;

}