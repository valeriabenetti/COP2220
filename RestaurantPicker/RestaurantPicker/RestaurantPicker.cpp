// RestaurantPicker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
You have a group of friends coming to visit for your high school reunion, and you want to take them out to eat at a local restaurant. 
You aren't sure if any of them have dietary restrictions, but your restaurant choices are as follows:

Joe's Gourmet Burgers -- Vegetarian: No, Vegan: No, Gluten-Free: No
Main Street Pizza Company -- Vegetarian: Yes, Vegan: No, Gluten-Free: Yes
Corner Cafe -- Vegetarian: Yes, Vegan: Yes, Gluten-Free: Yes
Mama's Fine Italian -- Vegetarian: Yes, Vegan: No, Gluten-Free: No
The Chef's Kitchen -- Vegetarian: Yes, Vegan: Yes, Gluten-Free: Yes

Write a program that asks whether any members of your party are vegetarian, vegan, or gluten-free, 
then displays only t he restaurants that may take the group to.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable
    string vegetarian,
        vegan,
        gluten;

    // Let's start asking about dietary restrictions
    cout << "Are there any in the party who is a Vegetarian? ";
    cin >> vegetarian;

    if (vegetarian == "yes" || vegetarian == "no")
    {
        cout << "Vegan? ";
        cin >> vegan;
        if (vegan == "yes" || vegan == "no")
        {
            cout << "Gluten-free? ";
            cin >> gluten;
            if (gluten == "yes" || gluten == "no")
            {
                cout << "\nHere are your restaurant choices:" << endl;

                if (vegetarian == "yes")
                {
                    if (vegan == "yes")
                    {
                        if (gluten == "yes" || gluten == "no")
                        {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else
                    {
                        if (gluten == "yes")
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                }
                else
                {
                    if (vegan == "yes")
                    {
                        if (gluten == "yes" || gluten == "no")
                        {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else
                    {
                        if (gluten == "yes")
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else
                        {
                            cout << "   Joe's Gourmet Burgers\n";
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                }
            }
            // Let's add some exception error messages just incase
            else
            {
                cout << "Yes or No must be chosen.\n" << "Try again." << endl;
            }
        }
        else
        {
            cout << "Yes or No must be chosen.\n" << "Try again." << endl;
        }
    }
    else
    {
        cout << "Yes or No must be chosen.\n" << "Try again." << endl;
    }
    return 0;
}

