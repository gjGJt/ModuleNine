#include <iostream>
using namespace std;


// Function declarations
void sum(float num1, float num2);
void difference(float num1, float num2);
void product(float num1, float num2);

int main() {
    float num1, num2;

 // Prompt user for input
    cout << "Enter first numeric value: ";
    cin >> num1;

    cout << "Enter second numeric value: ";
    cin >> num2;
// Call functions to compute and display results
    sum(num1, num2);
    difference(num1, num2);
    product(num1, num2);

    return 0;
}

// Function definition for sum
void sum(float num1, float num2) {
    cout << "Sum is: " << num1 + num2 << endl;
}

// Function definition for difference
void difference(float num1, float num2) {
    cout << "Difference is: " << num1 - num2 << endl;
}

// Function definition for product
void product(float num1, float num2) {
    cout << "Product is: " << num1 * num2 << endl;
}

