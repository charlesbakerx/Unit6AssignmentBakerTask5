/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: A program that sorts a predefined array using Bubble Sort in ASC mode.
*/
// #include <cstdlib>
#include <iostream>
#include <fstream>
#include "accounts.h"
using namespace std;

void sortArray(int array[], int size);
void printArray(int array[], int size);

int main() {
  // Declare an ofstream to be used to write to Results.txt
  ofstream outFile;
  // Open Results.txt in append mode
  outFile.open("Results.txt", ios_base::app);

  for (int i = 1; i <= 3; i++) {
    double startTime = cpuTime();
    string outputStart = "";
    string outputEnd = "";
    outputStart = "Start time for run " + to_string(i) + ": " + to_string(startTime);
    cout << outputStart << endl;
    sortArray(accountBalances, maxAccounts);
    printArray(accountBalances, maxAccounts);
    double endTime = cpuTime();
    outputEnd = "End time for run " + to_string(i) + ": " + to_string(endTime);
    cout << outputEnd << endl;

    string output = outputStart + ", " + outputEnd + ", Run time: " + to_string(endTime - startTime);
    outFile << output << endl;
  }
  return 0;
}

void sortArray(int array[], int size) {
  bool swapped;
  // Loop through the entire array
  for (int i = 0; i < size - 1; i++) {
    swapped = false;
    // Loop through the sub array from start to the last sorted value
    for (int j = 0; j < size - i - 1; j++) {
        // If the current value is > the next value swap them.
        if (array[j] > array[j + 1]) {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            swapped = true;
        }
    } 
    // If we complete a loop and no values were swapped then the list is sorted and we can stop early.
    if (!swapped) break;
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i];
    if (i != size - 1) {
      cout << ", ";
    }
  }
  cout << endl;
}