#include <iostream>
#include "QuickSort.hpp"

int main() {
    // Create an array to be sorted
    int arr[] = {5, 2, 8, 9, 1, 3};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create an instance of the QuickSort class
   QuickSort quickSort(arr, size);

    // Sort the array using the QuickSort algorithm
    quickSort.QuickSortFunc(0, size - 1);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}