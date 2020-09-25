// Talent Competition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Adding methods outside of the main
void getJudgeData(double &);

//Needed to change it from a void to a double
double calcScore(double, double, double, double, double);

// These next two function need to be called by the calcScore function....probably needs to be changed to either a double or a flaot...
// Will more than likely be using a double for the two below
int findLowest(double, double, double, double, double);

int findHighest(double, double, double, double, double);

int main()
{
	double judge1,
		  judge2,
		  judge3,
		  judge4,
		  judge5;

	//Lets call the getJudgeData function for each judge score
	getJudgeData(judge1);
	getJudgeData(judge2);
	getJudgeData(judge3);
	getJudgeData(judge4);
	getJudgeData(judge5);

	//Print out contestants score
	cout << "The contestants score is: " << calcScore(judge1, judge2, judge3, judge4, judge5);
	return 0;
	
}

// Get judge score input with a validation
void getJudgeData(double &judgeScore) 
{
	// Make a do while loop so it doesn't become an infinite loop
	do
	{
		// Ask user to put in the judges score
		cout << "Enter a judges score: ";
		cin >> judgeScore;

		//Here is the validation so that way if they try to put anything less than 0 or greater that 10, it's covered.
		if (judgeScore < 0 || judgeScore > 10)
		{
			cout << "\nError: Judges score must be greater than 0 and less than 10.\n";
		}

	} while (judgeScore < 0 || judgeScore > 10);
}



// Do some math in this function to find the final score after dropping the lowest and highest
double calcScore(double judge1, double judge2, double judge3, double judge4, double judge5) 
{
	double high, low;

	double finalScore;

	// Calculating the highest and lowest score while passing the scores
	high = findHighest(judge1, judge2, judge3, judge4, judge5);
	low  = findLowest(judge1, judge2, judge3, judge4, judge5);

	// Adding if statements
	if ( low == judge1)
	{
		if (high == judge2)
		{
			finalScore = (judge3 + judge4 + judge5) / 3;
		}
		else if (high == judge3)
		{
			finalScore = (judge2 + judge4 + judge5) / 3;
		}
		else if (high == judge4)
		{
			finalScore = (judge2 + judge3 + judge5) / 3;
		}
		else
		{
			finalScore = (judge2 + judge3 + judge4) / 3;
		}
	}
	else if (low == judge2)
	{
		if (high == judge1)
		{
			finalScore = (judge3 + judge4 + judge5) / 3;
		}
		else if (high == judge3)
		{
			finalScore = (judge1 + judge4 + judge5) / 3;
		}
		else if (high == judge4)
		{
			finalScore = (judge1 + judge3 + judge5) / 3;
		}
		else
		{
			finalScore = (judge1 + judge3 + judge4) / 3;
		}
	}
	else if (low == judge3)
	{
		if (high == judge1)
		{
			finalScore = (judge2 + judge4 + judge5) / 3;
		}
		else if (high == judge2)
		{
			finalScore = (judge1 + judge4 + judge5) / 3;
		}
		else if (high == judge4)
		{
			finalScore = (judge1 + judge2 + judge5) / 3;
		}
		else
		{
			finalScore = (judge1 + judge2 + judge4) / 3;
		}
	}
	else if (low == judge4)
	{
		if (high == judge1)
		{
			finalScore = (judge2 + judge3 + judge5) / 3;
		}
		else if (high == judge2)
		{
			finalScore = (judge1 + judge3 + judge5) / 3;
		}
		else if (high == judge3)
		{
			finalScore = (judge1 + judge2 + judge5) / 3;
		}
		else
		{
			finalScore = (judge1 + judge2 + judge3) / 3;
		}
	}
	else
	{
		if (high == judge1)
		{
			finalScore = (judge2 + judge3 + judge4) / 3;
		}
		else if(high == judge2)
		{
			finalScore = (judge1 + judge3 + judge4) / 3;
		}
		else if(high == judge3)
		{
			finalScore = (judge1 + judge2 + judge4) / 3;
		}
		else
		{
			finalScore = (judge1 + judge2 + judge3) / 3;
		}
	}
	// Print contestants score
	return finalScore;
}

// Do some math to find the highest score
int findHighest(double judge1, double judge2, double judge3, double judge4, double judge5) 
{
	if ((judge1 > judge2) && (judge1 > judge3) && (judge1 > judge4) && (judge1 > judge5))
	{
		return judge1;
	}
	else if ((judge2 > judge1) && (judge2 > judge3) && (judge2 > judge4) && (judge2 > judge5))
	{
		return judge2;

	}
	else if ((judge3 > judge1) && (judge3 > judge2) && (judge3 > judge4) && (judge3 > judge5))
	{
		return judge3;
	}
	else if ((judge4 > judge1) && (judge4 > judge2) && (judge4 > judge3) && (judge4 > judge5))
	{
		return judge4;
	}
	else
	{
		return judge5;
	}
}

// Do some math to find the lowest score
int findLowest(double judge1, double judge2, double judge3, double judge4, double judge5)
{
	if ((judge1 < judge2) && (judge1 < judge3) && (judge1 < judge4) && (judge1 < judge5))
	{
		return judge1;
	}
	else if ((judge2 < judge1) && (judge2 < judge3) && (judge2 < judge4) && (judge2 < judge5))
	{
		return judge2;
	}
	else if ((judge3 < judge1) && (judge3 < judge2) && (judge3 < judge4) && (judge3 < judge5))
	{
		return judge3;
	}
	else if ((judge4 < judge1) && (judge4 < judge2) && (judge4 < judge3) && (judge4 < judge5))
	{
		return judge4;
	}
	else
	{
		return judge5;
	}
}

/*
A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer's final score is determined by dropping the highest and lowest score received, then averaging the three remaining scores. Write a program that uses this method to calculate a contestant's score. It should include the following functions:

void getJudgeData() should ask the user for a judge's score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five judges.
void calcScore() should calculate and display the average of the three scores that remain after dropping the highest and lowest scores the performer received. This function should be called just once by main and should be passed the five scores.
The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.

int findLowest() should find and return the lowest of the five scores passed to it.
int findHighest() should find and return the highest of the five scores passed to it.
Input Validation: Do not accept judge scores lower than 0 or higher than 10.
*/
