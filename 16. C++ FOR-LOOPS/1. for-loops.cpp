#include <iostream>
using namespace std;
int main(){

//     Nested Loops
// It is also possible to place a loop inside another loop. This is called a nested loop.

// The "inner loop" will be executed one time for each iteration of the "outer loop":


for(int i = 1; i <= 2; i++){    // will execute 2 time

        cout << "outer: " << i << "\n";

    for (int i = 1; i <= 5; i++)    // will execute ( 2 x 5 ) times
    {
        cout << "inner: " << i << "\n";
    }
    
}


    return 0;
}