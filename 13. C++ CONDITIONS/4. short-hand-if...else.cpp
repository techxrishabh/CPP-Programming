#include <iostream>
using namespace std;
int main(){

    // Short Hand If...Else (Ternary Operator)
    // There is also a short-hand if else, which is known as the ternary operator because it   consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:


    // variable = (condition) ? expressionTrue : expressionFalse;

    int time = 16;

    string result = (time<12) ? "Good Morning" : "Good Evening";

    cout << result;

}