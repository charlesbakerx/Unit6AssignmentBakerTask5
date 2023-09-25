/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary:
*/
// #include <cstdlib>
#include <iostream>
#include "accounts.h"
using namespace std;

void sortArray(int *array);

int main() {
  return 0;
}

void sortArray(int *array) {
  bool swapped;
  int n = sizeof(*array) / sizeof(array[0]);
  for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        } if (!swapped) break;
    }
}