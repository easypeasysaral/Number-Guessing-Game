// We are implementing a Number Guessing Game in c++ involving  a guesser,three players and umpire the game operates as folows:

// Guesser : This will generate random number between 1 to 100
// Players : Each player will guess a number
// Umpire : This entity will collect the guesses from Guesser and players and determine which player, if any,have guessed the same number as the guesser

#include <iostream>
#include<ctime>
using namespace std;

class Guesser
{
    int guessnumber;

public:
    int takeguesserinput()
    {

        srand(time(0));

        guessnumber = rand() % 100 + 1;

        cout << "The guesser has chosen a random number (1 to 100)." << endl;
        return guessnumber;
    }
};
class Player
{
    int playernum;

public:
    int takeplayerinput()
    {
        int p;
        cin >> p;
        playernum = p;
        return playernum;
    }
};
class umpire
{
public:
    int g;
    int p1num;
    int p2num;
    int p3num;

    void GetTheNumberFromGuesser()
    {
        Guesser g1;
        g = g1.takeguesserinput();
    }
    int GetTheNumberFromPlayers()
    {
        Player p1;
        Player p2;
        Player p3;
        cout << "Give the number for player 1 : ";
        p1num = p1.takeplayerinput();
        cout << "Give the number for player 2 : ";
        p2num = p2.takeplayerinput();
        cout << "Give the number for player 3 : ";
        p3num = p3.takeplayerinput();
    }
    int PrintTheResult()
    {
        if (g == p1num)
        {
            if (g == p2num)
            {

                if (g == p3num)
                    cout << "All the players has won the game" << endl;
                else
                    cout << "Player 1 and Player 2 has won the game" << endl;
            }
            else
            {
                if (g == p3num)
                    cout << "Player 1 and Player 3 has won the game" << endl;
                else
                    cout << "Player 1  has won the game" << endl;
            }
        }
        else if (g == p2num)
        {
            if (p3num == g)
                cout << "The player 2 and player 3 has won the game" << endl;
            else
                cout << "The player 2 has won the game " << endl;
        }
        else if (g == p3num)
        {
            cout << "The Player 3 has Won the game" << endl;
        }
        else
        {
            cout << "All the player has lost the game " << endl;
        }
    }
};
int main()
{
    cout << "-------------------------Let's Start the Game----------------------------------" << endl;
    cout << "Each Player Will Guess the Number between 1 to 100" << endl;
    cout << " Player who guesses the correct number Wins the Game " << endl;
    umpire u;
    u.GetTheNumberFromGuesser();
    u.GetTheNumberFromPlayers();
    u.PrintTheResult();
    cout << "-------------------------End Game----------------------------------" << endl;
}
