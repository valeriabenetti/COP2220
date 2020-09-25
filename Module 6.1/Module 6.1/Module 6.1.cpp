// Module6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Valeria Benetti 2183227

#include <iostream>
#include <vector>
using namespace std;
int linearSearch(const int[], int, int, int&);
int binarySearch(const int[], int, int, int&);
void selectionSort(int[], int);

int main()
{
    // Declaring and initializing the random 100 integers
    const int SIZE = 100;
    int randArray[SIZE];
    int linearResult;
    for (int i = 0; i < SIZE; i++) 
    {
        randArray[i] = rand() % 1000;  //Generate number between 0 to 9999
    }
    // Print out the array
    // Commenting this out, I only needed it to make sure the it is printing out the random integers
    // cout << "\nElements of the array::" << endl;
    // for (int i = 0; i < SIZE; i++)
    // {
    //    cout << "Elements no " << i + 1 << "::" << randArray[i] << endl;
    //};


    // Lets sort the array
    selectionSort(randArray, SIZE);

    int counter = 0; // To hold the comparisons? 

    // holding value that needs to be searched
    int searchVal;

    // Do I need to ask user to put in a Value?
    cout << "What number should we search for? ";
    cin >> searchVal;

    // Search the array for random integer in the array
    linearResult = linearSearch(randArray, SIZE, searchVal, counter);

    // Linear Algorithm output
    cout << "Linear Search: \n";
    // I Believe this should be the validation for when searching to see if that value is in the random integer list
    if (linearSearch(randArray,SIZE, searchVal, counter) < 0 )
    {

        cout << "Value was not found \n";
    }
    else
    {
        cout << "Value was found \n";
    }
    cout << "Number of comparisons is: " << counter << endl;


    // Binary Algorithim output
    cout << "Binary Search: \n";
    if (binarySearch(randArray, SIZE, searchVal, counter) < 0)
    {
        cout << "Value was not found \n";
    }
    else
    {
        cout << "The value was found \n";
    }
    cout << "Number of comparisons is: " << counter << endl;

    return 0;
}

int linearSearch(const int randArray[], const int SIZE, int value, int& compCount)
{
    compCount = 0;    // Initializing the number of camparisons

    for (int i = 0; i < SIZE; i++)
    {
        // benchmarking the count number of comparisons so it can increase with each iteration
        compCount++;

        if (randArray[i] == value)
        {
            return i; //return the index if found
        }
    }
    // If it is not found
    return -1;
}

int binarySearch(const int randArray[], const int SIZE, int value, int& compCount)
{
    // Note to self...try to follow page 469 in the book for this. Apparently Binary Search assumes that the elemets are already sorted. Use Ex. Program 8-2
    compCount = 0;        // intializing the comparisons
    int first = 0;        // starting marker for first
    int mid;             // marker for middle
    int last = SIZE - 1; // Marker last element
    int index = -1;     // This is where I will store the index if found, -1 = not found

    bool found = false;

    while (!found && first <= last)
    {
        // Continue checking, so long as we do not find the element and still have the elements to search
        // Benchmarking and counting number of comparisons. Increment each iteration as single iteration
        compCount++;

        // Computer the middle element
        mid = (first + last) / 2;

        // Check the value against the middle element
        if (value == randArray[mid])
        {
            // store the index to return if found
            // raise the found boolean from false true
            index = mid;
            found = true;
        }
        else if (value < randArray[mid])
        {
            // value maybe in top half of the values
            last = mid - 1;
        }
        else
        {
            // value maybe in the other half of the list
            first = mid + 1;
        }
    }
    return index;
}

void selectionSort(int randArray[], const int SIZE)
{
    // creating ints for each part of the array
    int smallest, // holds the smallest element in the index
        temp; //helps with swapping

    for (int i = 0; i < (SIZE-1); i++)
    {
        // Let find the smallest in the array
        smallest = i;  // starting off with the first in the array being the "smallest"

        for (int s = (i + 1); s < SIZE; s++)
        {
            // Now to to really look for the smallest one
            if (randArray[s] < randArray[smallest])
            {
                smallest = s;
            }

            // Time to swap the smallest with this one
            temp = randArray[smallest];
            randArray[smallest] = randArray[i];
            randArray[i] = temp;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
/*
1. Write a program that has an array of at least 100 randomly generated integers. 

2. It should call a function that uses the linear search algorithm to locate one of the values.  

3. The function should keep a count of the number of comparisons it makes until it finds the value.

4. The program then should call a function that uses the binary search algorithm to locate the same value.

5.It should also keep count of the number of comparisons it makes. Displays these values with an appropriate description.
*/