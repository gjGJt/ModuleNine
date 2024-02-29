#include <iostream>
#include <iomanip>
using namespace std;

// Function declaration
float calculate(float num1, float num2, char op);

int main() {
    float num1, num2;
    char op;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    // Call the calculate function and display the result
    cout << fixed << setprecision(2);
    cout << num1 << endl;
    cout << " " << op << endl;
    cout << num2 << endl;
    cout << "= " << calculate(num1, num2, op) << endl;

    return 0;
}

// Function definition for calculate
float calculate(float num1, float num2, char op) {
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        case '%':
            if (num2 != 0)
                return static_cast<int>(num1) % static_cast<int>(num2); // Cast to int for modulus operation
            else {
                cout << "Error: Modulus by zero!" << endl;
                return 0;
            }
        default:
            cout << "Error: Invalid operator!" << endl;
            return 0;
    }
}
