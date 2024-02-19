#include <iostream>
using namespace std;
int main(){

    // The foreach Loop
    // There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):

    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
    


}