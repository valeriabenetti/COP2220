// Meteorologist Report.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Valeria Benetti 2183227

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Adding const ints for month and days
	const int month = 3,
		day = 30;

	// Creating a 3x30 Array...slide 62??
	char weather[month][day];

	//Creating name placements for S, R, and C
	int Sun, Rain, Cloudy;

	// Creating value placers for the totals of Sun, Rain, Cloudy and the largest rain in the 3 months
	int totalSun = 0,
		totalRain = 0,
		totalCloudy = 0,
		largestRain = 0;

	// Note to self....put file in second folder with the projects name on it...not the debug or main file
	ifstream inFile("RainOrShine.txt"); //Open file

	if(!inFile)
	{
		// If there is an error with opening the file
		cout << "Error opening up the file";
	}
	else
	{
		// Read weather file to start gathering the data
		for (int row = 0; row < month; row++)
		{
			for (int col = 0; col < day; col++)
			{
				inFile >> weather[row][col];
			}
		}
	}
	// Closing the file
	inFile.close();


	// Creating a report to print out
	cout << "3 Month Weather Report" << endl;
	for (int row = 0; row < month; row++)
	{
		Sun = 0;
		Rain = 0;
		Cloudy = 0;

		//Creating the columns for the months
		for (int col = 0; col < day; col++)
		{
			//Calculating the numbers for each month
			switch(weather[row][col])
			{
				case 'S': Sun++;
					break;
				case 'R': Rain++;
					break;
				case 'C': Cloudy++;
					break;
			}
		}

		// Displaying the numbers for the months
		cout << " For the month of ";
		if (row == 0)
		{
			cout << "June \n";
		}
		else if (row == 1)
		{
			cout << "July \n";
		}
		else if (row == 2)
		{
			cout << "August \n";
		}

		// Print out the result of the months
		cout << "Rainy: " << Rain << endl << "Sunny: " << Sun << endl << "Cloudy: " << Cloudy << endl;

		// Total for 3-months
		totalSun += Sun;
		totalRain += Rain;
		totalCloudy += Cloudy;

		// Calculate the month that has the most rain
		if (largestRain > Rain)
		{
			largestRain = row;
		}
	}

	// Display the totals of the months
	cout << "For the whole three-month period\n" << "Rainy: " << totalRain << endl << "Sunny: " << totalSun << endl << "Cloudy: " << totalCloudy << endl;

	// Display the month with the largest period of rain
	cout << "The month with the largest number of days that it rained is: ";
	if (largestRain == 0)
	{
		cout << "June" << endl;
	}
	else if (largestRain == 1)
	{
		cout << "July" << endl;
	}
	else
	{
		cout << "August" << endl;
	}

	return 0;

}

/*
An amateur meteorologist wants to keep track of weather conditions during the past year's three-month summer season, and has designated each day as either rainy ('R'), cloudy ('C'), or sunny ('S'). 
Write a program that stores this information in a 3 x 30 array of characters, where the row indicates the month (0 = June, 1 = July, 2 = August) and the column indicates the day of the month. 
Note data are not being collected for the 31st of any month. 
The program should begin by reading the weather data in from a file. 
Then it should create a report that displays, for each month and for the whole three-month period, how many days were rainy, how many were cloudy, and how many were sunny. 
It should report which of the three months had the largest number of rainy days.

*/
