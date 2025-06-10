#include <iostream>
#include <limits>
using namespace std;


/**
 * Adds two numbers.
 * 
 * @param a First number
 * @param b Second number
 * @return The sum of a and b
 */
double add(double a, double b) {
    return a + b;
}

/**
 * Subtracts the second number from the first.
 * 
 * @param a First number
 * @param b Second number
 * @return The result of a - b
 */
double subtract(double a, double b) {
    return a - b;
}

/**
 * Multiplies two numbers.
 * 
 * @param a First number
 * @param b Second number
 * @return The product of a and b
 */
double multiply(double a, double b) {
    return a * b;

}

/**
 * Divides the first number by the second.
 * 
 * @param a First number
 * @param b Second number
 * @return The result of a / b, or NaN if b is zero
 */
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return numeric_limits<double>::quiet_NaN(); // Return NaN to indicate an error
    }
    return a / b;
}


/**
 * Prints the question prompt for the calculator.
 * 
 * @param None
 * @return void
 */
void printQuestion() {
    cout << "Simple Quant Preparation Calculator\n";
    cout << "Enter an expression (e.g., 3 + 4): ";
}

/**
 * Entry point for the CLI Calculator program.
 *
 * Prompts the user for an arithmetic expression (e.g. "3 + 5"),
 * performs the calculation, and outputs the result.
 *
 * Handles basic error checking and supports +, -, *, and / operations.
 *
 * @return Exit code (0 on success, 1 on invalid input)
 */
int main() {
    double num1, num2;
    char operation;
    double result;

    printQuestion();
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