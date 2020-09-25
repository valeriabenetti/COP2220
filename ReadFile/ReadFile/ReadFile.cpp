// ReadFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    
    
    // Creating some variables for math
    float count = 0; // this should start the count of how many numbers are in the file

    float total = 0; // this should total up all the numbers that are in that file

    float avg = 0; // this is for when we average out the total from the count

    float num; // So that way the reader is able to read each number 
    
    ifstream inFile("random.txt"); // Getting the file to be open and read
 
    if (!inFile) cerr << "Can't open input file"; // Adding an Error Message just incase

    while (inFile >> num)
    {
        count++; //counting each number in the file

        total += num; // adding each number to each other
    }

    // Moved the avgerage math out of the while loop
    avg = total / count;

    // Printing out the info
    cout << "The total numbers in this file is: " << count << endl;
    cout << "The running total for all the numbers is: " << total << endl;
    cout << "The average number for all the numbers is: " << avg;

    inFile.close();

    return 0;
} 
