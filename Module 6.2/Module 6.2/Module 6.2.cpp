// Module 6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Valeria Benetti 2183227

#include <iostream>
using namespace std;

// Functions
void bubbleSort(int[], int, int&);
void selectionSor(int[], int, int&);
void displayResults(int, int);

int main()
{
	// Declaring and initializing the two random arrays
	const int SIZE = 100;
	int randArray1[SIZE];
	int randArray2[SIZE];

	// initializing the exchanges
	int exchange1 = 0,
		exchange2 = 0;

	bubbleSort(randArray1, SIZE, exchange1);


}

/*
Write a program that uses a two identical arrays of at least 100 randomly generated integers. 
It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order. 
The function should keep a count of the number of exchanges it makes. 
The program then should call a function that uses the selection sort algorithm to sort the other array. 
It should also keep count of the number of exchanges it makes. Display these values on the screen with appropriate descriptions.
*/
