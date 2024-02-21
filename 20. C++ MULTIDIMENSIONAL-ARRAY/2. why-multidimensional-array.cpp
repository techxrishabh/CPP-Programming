// Why Multi-Dimensional Arrays?

// Multi-dimensional arrays are great at representing grids. This example shows a practical use for them. In the following example we use a multi-dimensional array to represent a small game of Battleship:


// BUILDING A SMALL GAME OF BATTLE SHIP ==================================================================


#include <iostream>
using namespace std;
int main(){

  // We put "1" to indicate there is a ship.

  bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables

int hit = 0;
int numberOfTurns = 0;

// Allow the players to keep going until the player the play have hit all the four ships 

while (hit < 4)
{
    int row, column;

    cout << "selecting coordinates\n";

    // Ask the player for a row

    cout << "select the rows no. between 0 and 3\n";

    cin >> row;

    // Ask the player for a column

    cout << "select the column no. between 0 and 3\n";

    cin >> column;


    if (ships[row][column])
    {
        ships[row][column] = 0;
        hit++;

        cout << "you have " << (4-hit) << " left\n\n";
    } else {

  cout << "miss\n\n";
}
    // Count how many turns the player has taken
    numberOfTurns++;
} 


cout << "Victory! ";
cout << "You have won in " << numberOfTurns << " turn";


}