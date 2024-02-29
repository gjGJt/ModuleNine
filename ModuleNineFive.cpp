#include <iostream>
using namespace std;

// Function declaration
void reverseArray(int arr[], int size);

int main() {
    const int size = 5;
    int numbers[size];

    // Prompt user to enter 5 numbers and store them in the array
    for (int i = 0; i < size; ++i) {
        cout << "Enter #" << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Print the original contents of the array
    cout << "\nOriginal contents of array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << endl;
    }

    // Call the function to reverse the array
    reverseArray(numbers, size);

    // Print the reversed contents of the array
    cout << "\nReversed contents of array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}

// Function definition to reverse the array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        ++start;
        --end;
    }
}
