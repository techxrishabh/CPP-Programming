#include <iostream>
using namespace std;
int main(){
    int time = 13;
    if(time < 12){
        cout << "Good Morning";

    } else if(time < 18){
        cout << "Good Evening";
    } else {
        cout << "Good Night";
    }

}