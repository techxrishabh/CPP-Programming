#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;       // continue mtlb aage mat jao aur yahi se continue kro bapas
        }
        cout << i << "\n";   // 1 2 3 5 6 7 8 9 10
    }
    
    int j = 1;
    while (j <= 10)
    {
        if (j == 4)
        {
            j++;
            continue;
        }
        cout << j << "\n";   // 1 2 3 5 6 7 8 9 10
        j++;
        
    }
    
 
}