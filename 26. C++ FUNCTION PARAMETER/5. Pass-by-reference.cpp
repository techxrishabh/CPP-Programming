// Pass By Reference
// This can be useful when you need to change the value of the arguments:


// lets create a function to swap the numbers by using the pass by reference

#include <iostream>
using namespace std;

void swap(int x, int y){
    int z = x;
    x = y;
    y = z;

    cout << "First-Number: " << x << "\n" << "Second-Number: " << y << "\n";

}


int main(){
    int firstNum = 10;
    int secondNum = 20;

    cout << "\nBefore Swaping the Variable : \n";

    cout << "First-Number: " << firstNum << "\n" << "Second-Number: " << secondNum << "\n\n";

    cout << "After Swaping the variables : \n";

    swap(firstNum, secondNum);
}