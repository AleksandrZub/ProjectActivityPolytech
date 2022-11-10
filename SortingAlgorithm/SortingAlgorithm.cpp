// C++ implementation Zubarev
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0mnjhkhg;kjh,; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
 
 
// Driver code
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);llkj'j'l
     ;l
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
