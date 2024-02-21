// Creating References

#include <iostream>
using namespace std;
int main(){
    string food = "tempura rice";
    string &meal = food;

    cout << food << "\n"; // tempura rice
    cout << meal << "\n"; // tempura rice
}