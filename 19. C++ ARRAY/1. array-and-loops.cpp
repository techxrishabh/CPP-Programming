// Loop through an Array

#include <iostream>
using namespace std;
int main(){
    string cars[] = {"volvo", "farrari", "lamborgini", "alto", "tesla", "ford"}; // we dont have to write array size because compiler is smart enough to determine the size of an array based on the number of inserted value

    cout << sizeof(cars[0]) << "\n"; // 24

    int size = sizeof(cars)/sizeof(cars[0]); // to find the size of string array

    for (int i = 0; i < size; i++)
    {
        cout << cars[i] << "\n";
    }
    

}