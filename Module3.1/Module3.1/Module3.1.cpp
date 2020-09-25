// Module3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <numbers>
using namespace std;

int main()
{
    int value = 0,
        max,
        min,
        count = 0;

    // Do a while to enure that while the value isn't -99 we continue
    while (value != -99) 
    {
        // Ask for user to input first number
        cout << "Please enter a number or type -99 to close: ";
        cin >> value;


       //Adding If statement here
        if (count == 0)
        {
            min = value;
            max = value;
        }
        else
        {
            if (value > max && value != -99)
            {
                max = value;
            }
            else
            {
                if (value < min && value != -99)
                {
                    min = value;
                }
            }
        }
        count++;
    }
    // Print out both of the smallest values? 
    cout << "Largest number is: " << max << endl;
    cout << "Smallest number is: " << min << endl;
    return 0;
}

