#include <iostream>

int recursiveMaximum(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int maxOfRest = recursiveMaximum(arr + 1, size - 1);

    return (arr[0] > maxOfRest) ? arr[0] : maxOfRest;
}

int main() {
    
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    
    int* arr = new int[size];

   
    std::cout << "Enter the elements of the array, separated by spaces: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    
    int maxElement = recursiveMaximum(arr, size);

    
    std::cout << "The maximum element in the array is: " << maxElement << std::endl;

    
    delete[] arr;

    return 0;
}

