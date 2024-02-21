// Multi-Dimensional Array

#include <iostream>
using namespace std;
int main(){
    string letters[2][2][2] = {
        {
            {"A", "B"}, 
            {"c", "D"}
        }, 
        {
            {"X", "Y"}, 
            {"V", "W"}
        }
    };


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n"; // A B C D X Y V W
            }
            
        }
        
    }
    
}