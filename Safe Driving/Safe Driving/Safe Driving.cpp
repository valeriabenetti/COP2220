// Safe Driving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Adding the two functions that need to be called in main
int getNumAccidents(string Region);

// Using double just in case
void findLowest(double north, double south, double east, double west, double central);

int main()
{
   // Create variable when user makes calls for each region also lining up the code so it looks a bit better
    double northVal   = getNumAccidents("North");
    double southVal   = getNumAccidents("South");
    double eastVal    = getNumAccidents("East");
    double westVal    = getNumAccidents("West");
    double centralVal = getNumAccidents("Central");

    //got to make sure to call the variables at the end
    findLowest(northVal, southVal, eastVal, westVal, centralVal);

    return 0;
}

// Expanding on getNumAccidents when each reqion is called
int getNumAccidents(string Region) {
    //variable when user inputs number of accidents per region
    int numAccidents = 0;

    cout << "Please enter number of accidents for " << Region << " region:\n";
    cin >> numAccidents;

    //Validations for if the user tries to input something less than 0
    while (numAccidents < 0) {
        cout << "Number of accidents cannot be less than 0, please enter another value";
        cin >> numAccidents;
    }

    //return value from function
    return numAccidents;
}

// Expanding on the findLowest function
void findLowest(double northVal, double southVal, double eastVal, double westVal, double centralVal) {
    
    // adding some variables to determine which region has to lowest accidents
    double bestRegion = 0;

    // adding string to make only one cout statement instead of multiple
    string bestRegionName;
    string north   = "North";
    string south   = "South";
    string east    = "East";
    string west    = "West";
    string central = "Central";

    if ((northVal < southVal) && (northVal < eastVal) && (northVal < westVal) && (northVal < centralVal))
    {
        bestRegionName = north;
        bestRegion = northVal;
    }
    if ((southVal < northVal) && (southVal < eastVal) && (southVal < westVal) && (southVal < centralVal))
    {
        bestRegionName = south;
        bestRegion = southVal;

    }
    if ((eastVal < northVal) && (eastVal < southVal) && (eastVal < westVal) && (eastVal < centralVal))
    {
        bestRegionName = east;
        bestRegion = eastVal;
    }
    if ((westVal < northVal) && (westVal < southVal) && (westVal < eastVal) && (westVal < centralVal))
    {
        bestRegionName = west;
        bestRegion = westVal;
    }
    if ((centralVal < northVal) && (centralVal < southVal) && (centralVal < eastVal) && (centralVal < westVal))
    {
        bestRegionName = central;
        bestRegion = centralVal;

    }
    cout << "The region " << bestRegionName << " had the lowest numbers of accidents with the total being: " << bestRegion;
}


/*
Write a program that determines which of five geographic regions within a major city (north, south, east, west, and central) had the fewest reported automobile accidents las year. It should have the following two functions, which are called by main:

int getNumAccidents() is passed the name of a region. It asks the user for the number of automobile accidents reported in that region during the last year, validates the input, then returns it. It should be called once for each city region.
void findLowest() is passed, the five accident totals. It determines which is the smallest and prints the name of the region, along with its accident figure.
Input Validation: Do not accept an accident number that is less than 0.

*/