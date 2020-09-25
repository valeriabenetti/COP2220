// Rainfall.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Valeria Benetti 2183327

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	 // Initializing the variables for largest, smallest, total and average rainfall
	 double rain[12];

	 // Have user enter rainfall information
	 cout << "Please enter rainfall data for 12 month: ";
	// Create a loop and validation
	 for (int counter = 0; counter < 12; counter++)
	 {
		 cout << "Month" << counter + 1 << ": ";
		 cin >> rain[counter];

		 // Validation to not accept negative number
		 while (rain[counter] < 0)
		 {
			 // Print out an error message
			 cout << "Error: Negative values are not accepted. Please enter another value\n";
			 cout << "Month" << counter + 1 << ": ";
			 cin >> rain[counter];
		 }
		 cout << endl;
	 }
	 double total = 0, average = 0;
	 int  largest = 0, smallest = 0;
	 // Looping in the elements
	 for (int counter = 0; counter < 12; counter++)
	 {
		 //update lowest rainfall
		 if (rain[counter] < rain[smallest])
		 {
			 smallest = counter;
		 }
		 if (rain[counter] > rain[largest])
		 {
			 largest = counter;
		 }

		 total += rain[counter];
	 }

	 // Making the average
	 average = (double)total / 12;

	 // Print out the results
	 cout << fixed << setprecision(2);
	 cout << "\n The total yearly rainfall: " << total << endl;
	 cout << "The average monthly rainfall: " << average << endl;
	 cout << "The smallest rainfall was in month " << smallest + 1 << " with " << rain[smallest] << endl;
	 cout << "The largest rainfall was in month " << largest + 1 << " with " << rain[largest] << endl;

	 // End of script
	 return 0;
}


/*
Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles. 
The program should calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts.

Input Validation: Do not accept negative numbers for monthly rainfall figures.
*/
