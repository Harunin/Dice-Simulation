#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Dice
{
    public:
    void roll();
    void rerollPrompt();
};

// Get a random dice roll from 1 to 6
void Dice::roll()
{
    int diceRoll;
    diceRoll = rand() % 6 + 1;
    cout << "You rolled a " << diceRoll << "!";
    if (diceRoll == 1)
    {
        cout << "   *";
    }
    else if (diceRoll == 2)
    {
        cout << "   **";
    }
    else if (diceRoll == 3)
    {
        cout << "   ***";
    }
    else if (diceRoll == 4)
    {
        cout << "   ****";
    }
    else if (diceRoll == 5)
    {
        cout << "   *****";
    }
    else if (diceRoll == 6)
    {
        cout << "   ******";
    }
    cout << '\n';
    Dice::rerollPrompt();
}

void Dice::rerollPrompt()
{
    string decision;
    cout << "Reroll? (Y/N)" << '\n' << ": ";
    cin >> decision;
    cout << '\n';
    // Reroll dice and get reroll prompt again
    if (decision == "Y" || decision == "y")
    {
        Dice::roll();
    }
    // Exit program
    else if (decision == "N" || decision == "n")
    {
        cout << "Exiting...";
        exit(-1);
    }
    while (decision != "Y" && decision != "y" && decision != "N" && decision != "n")
    {
        cout << "Invalid input, try again." << '\n';
        Dice::rerollPrompt();
    }
}