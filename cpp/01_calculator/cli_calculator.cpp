#include <iostream>
#include <limits>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;

}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return numeric_limits<double>::quiet_NaN(); // Return NaN to indicate an error
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operation;
    double result;

    cout << "Simple Quant Preparation Calculator";
    cout << "Enter an expression (e.g., 3 + 4): ";
    
    // Input format: num1 operation num2
    // Example: 3 + 4
    cin >> num1 >> operation >> num2;

    
    switch(operation) {
        case '+': result = add(num1, num2); break;
        case '-': result = subtract(num1, num2); break;
        case '*': result = multiply(num1, num2); break;
        case '/': result = divide(num1, num2); break;
        default:
            cout << "Error: Invalid operation.\n";
            return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;
    return 0; // Exit successfully
}