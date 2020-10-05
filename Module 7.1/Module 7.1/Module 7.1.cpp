// Module 7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Valeria Benetti 2183227

#include <iostream>
#include <iomanip>
using namespace std;


// Calling the functions
void getScores(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayScores(double*, int, double);
int main()
{
	double* Exams,     // To allocate to an array
		Average,       // To hold the average of scores
		Scores;       // Hold the number of scores

	// Ask user for the Exam Scores
	cout << "How many exam scores do you have to make an average? ";
	cin >> Scores;

	// Allocate to an array large enough  to hold the amount of scores that user inputted
	Exams = new double[Scores]; // Make a memory bank for it

	// Start adding the number of exams and the scores
	getScores(Exams, Scores);

	// Sorting the exams and scores in ascending order
	selectionSort(Exams, Scores);

	// Make the average
	Average = getAverage(Exams, Scores);

	// Display the Scores
	displayScores(Exams, Scores, Average);


	return 0;
}


// Creating a function that dynamically allocates it to a large enough array
void getScores(double* Exams, int Scores)
{
	cout << "Enter each of the scores.\n";
	for (int i = 0; i < Scores; i++)
	{
		do
		{
			cout << "Score #" << (i + 1) << ": ";
			cin >> *(Exams + i);

			// Input Validation to make sure that it's not a negative number
			if (*(Exams + i) < 0)
			{
				cout << "Exam Scores must be greater than 0. Please re-enter exam score.\n";
			}

		} while (*(Exams + i) < 0);
	}
}

// Creating the selectionSort function to put the Exam Scores in ascending order
void selectionSort(double *Exams, int Scores)
{
	// Create starting values to search for scores
	int startScan, minIndex;
	double minValue;

	for (startScan = 0; startScan < (Scores - 1); startScan++)
	{
		minIndex = startScan;
		minValue = *(Exams + startScan);
		for (int i = startScan + 1; i < Scores; i++)
		{
			if (*(Exams + i) < minValue)
			{
				minValue = *(Exams + i);
				minIndex = i;
			}
		}
		*(Exams + minIndex) = *(Exams + startScan);
		*(Exams + startScan) = minValue;
	}
}

// Creating the function the find the average of all the exam scores that were given
double getAverage(double* Exams, int Scores)
{
	double Total{};

	for (int i = 0; i < Scores; i++)
	{
		Total += *(Exams + i);
	}

	return Total / Scores;
}


// Creating the function that will display the scores
void displayScores(double *Exams, int Scores, double Average)
{
	cout << "\n         Exam Scores           \n";
	cout << "Number of exam scores: " << Scores << endl;
	cout << "Exam scores listed in ascending order: \n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Exams + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average Exam Score: " << Average << endl;
}


/*
Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. 
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. 
Another function should be called that calculates the average score. 
The program should display the sorted list of scores and averages with appropriate headings.
Use pointer notation rather than array notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.
*/
