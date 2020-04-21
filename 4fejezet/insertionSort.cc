#include <stdlib.h>
#include <iostream>

using namespace std;

//member functions declaration
void insertionSort(int arr[], int length);
void printArray(int array[], int size, int rendezett_hatara);

// main function
int main() 
{
    int array[5] = {5, 4, 2, 8, 3};
    // calling insertion sort function to sort the array
    printArray(array, 5, 0);
    insertionSort(array, 5);
    return 0;
}

void insertionSort(int arr[], int length) 
{
    int i, j, key;
    for (i = 1; i < length; i++) 
    {
        key = arr[i];
        j = i-1;

        cout << "the key is " << key << "\n";
        
        while (j >= 0 && arr[j] > key) 
        {
            cout << "comparing with: " << arr[j] << "...\n";
            arr[j+1] = arr[j];
            cout << "current state: \n";
            printArray(arr, length, i);
            j--;
        }
        arr[j +1] = key;
        cout << "result: \n";
        printArray(arr, length, i);
        cout << "***********************\n";
    }
    cout << "Sorted Array: ";
    // print the sorted array
    printArray(arr, length, length);
}

// function to print the given array 
void printArray(int array[], int size, int rendezett_hatara)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];
        if (j == rendezett_hatara)
            cout << " |";
    }
    cout << endl;
}