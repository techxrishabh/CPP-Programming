// ASCII values

// Each character has an ASCII value 

// 'A'  =>  65              'a' =>  97              '0' =>  48
// 'B'  =>  66              'b' =>  98              '1' =>  49
// 'C'  =>  67              'c' =>  99              '2' =>  50
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// 'Z'  =>  90              'z' =>  122             '9' =>  57


// How To Find ASCII VALUE 

#include <iostream>
using namespace std;
int main(){
    char ascii1 = 'A';
    char ascii2 = 'a';
    char ascii3 = '0';

    cout << (int)ascii1 << "\n";    // 65
    cout << (int)ascii2 << "\n";    // 97
    cout << (int)ascii3 << "\n";    // 48

}
