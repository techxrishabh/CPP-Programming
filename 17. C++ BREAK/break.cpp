#include <iostream>
using namespace std;
int main(){

    // Lets try to jump out of the loops when i = 4

    for (int i = 1; i <= 10; i++)
    {
        
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";   // 1 2 3 
    }
    
    // let try to do the same in while loops

    int j = 0;

    while (j <= 10)
    {
        cout << j << "\n";
        j++;
        if(j == 4){    // 0 1 2 3
            break;
        }
    }
    

}