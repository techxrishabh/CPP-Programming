// Default Parameter Value
// You can also use a default parameter value, by using the equals sign (=).
// if we call a function without parameter then it will print the default value


#include <iostream>
using namespace std;

void myfunction(string country = "INDIA"){

    cout << country << "\n";

}

int main(){

    myfunction("USA");
    myfunction("UK");
    myfunction();  // by default it will print INDIA

}