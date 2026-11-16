#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int LOT_SIZE = 5;
    const int PLAYER_SIZE = 5;
    
    int winningDigits[LOT_SIZE];
    int player[PLAYER_SIZE];
    int numberMatches = 0;
    
    // generate random numbers
    srand(time(0));
    
    for(int i = 0; i < LOT_SIZE; i++)
    {
        int randomNum = rand() % 9;
        winningDigits[i] = randomNum;
        
        // show winning numbers
        // cout << winningDigits[i] << endl;
    }
    
    // ask for the player's numbers of choice
    for(int n = 0; n < PLAYER_SIZE; n++)
    {
        cout << "Digit " << n + 1 << ": ";
        cin >> player[n];
    }
    
    // luckiness check
    for(int x = 0; x < LOT_SIZE; x++)
    {
        if(winningDigits[x] == player[x])
        {
            numberMatches++;
        }
    }
    
    // print winning numbers, player numbers, and no. of matches
    cout << "Your numbers: ";
    
    for(int y = 0; y < LOT_SIZE; y++)
    {
        cout << player[y] << " ";
    }
    
    cout << "\nWinning numbers: ";
    
    for(int z = 0; z < LOT_SIZE; z++)
    {
        cout << winningDigits[z] << " ";
    }
    
    cout << "\nNumber of matches: " << numberMatches << endl;
    
    return 0;
}