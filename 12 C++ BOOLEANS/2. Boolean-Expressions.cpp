// Boolean Expression
// A Boolean expression returns a boolean value that is either 1 (true) or 0 (false).

// int x = 10;
// int y = 9;
// cout << (x > y); // returns 1 (true), because 10 is higher than 9


// cout << (10 > 9); // returns 1 (true), because 10 is higher than 9


// int x = 10;
// cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10


// cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15



// REAL LIFE EXAMPLE 

#include <iostream>
using namespace std;
int main(){
    int myAge = 18;
    int votingAge = 18;

    if (myAge >= votingAge){
        cout << "You can vote";
    } else {
        cout << "you cant vote";
    }
}