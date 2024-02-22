// Pass Arrays as Function Parameters
// We can also pass arrays as a function


#include <iostream>
using namespace std;

void printNumber(int myNumbers[5]){
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
    
}

int main(){
    int myNumbers[5] = {10, 15, 20, 25, 30};

    printNumber(myNumbers);

    return 0;
}