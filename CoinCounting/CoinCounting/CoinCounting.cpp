// CoinCounting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /* Create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar.
     The program should ask the user to enter the number of pennies, nickels, dimes, and quarters. 
     If the total value of the coins entered is equal to one dollar, the program should congratulate the user for winning the game. 
    Otherwise, the program should display a message indicating whether the amount entered was more than or less than one dollar. */

    // Variables for the coins when math happens
    const float PENNY = .01,
                NICKEL = .05,
                DIME = .10,
                QUARTER = .25,
                DOLLAR = 1.00;
    // Variables for input
    float pennies,
        nickels,
        dimes,
        quarters,
        total{};

        // Ask user to input for 
        cout << "Test your luck! Come up with a combination of coins that equal EXACTLY One Dollar!" << endl;

        // Ask for pennies
        cout << "How many pennies do you want to use? ";
        cin >> pennies;

        // Ask for Nickels
        cout << "How many nickels do you want to use? ";
        cin >> nickels;

        // Ask for dimes
        cout << "How many dimes do you want to use? ";
        cin >> dimes;

        // Quarters
        cout << "How many quarters do you want to use? ";
        cin >> quarters;

       // Lets make a line break here to make some space
        cout << endl;

        // Math Time!!
        total += ((pennies *= PENNY) +
            (nickels *= NICKEL) +
            (dimes *= DIME) +
            (quarters *= QUARTER));

        // If/else if desicion goes here
        if (total == DOLLAR)
        {
            cout << "Your total is: $" << total;
            cout << " and it equals $1!!!" << endl;
        }
        else if (total < DOLLAR) {
            cout << "Your total is: $" << total;
            cout << " and it is less than $1. Please try again!" << endl;
        }
        else if (total > DOLLAR) {
            cout << "Your total is: $" << total;
            cout << " and it is more than $1. Please try again!" << endl;
        }

        // Lets close out the program!
        return 0;
}

