#include <iostream>
#include <limits>
#include <sstream>
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
    cout << "To exit, type 'exit' or 'quit'.\n";
}

/**
 * Takes input from the user for the calculator.
 * 
 * @param num1 Reference to the first number
 * @param operation Reference to the operation character (+, -, *, /)
 * @param num2 Reference to the second number
 * @return void
 */
void takeInput(double &num1, char &operation, double &num2) {
    while (true) {
        std::string line;
        std::getline(std::cin >> std::ws, line); // Read the entire line including spaces

        if (line == "exit" || line == "quit") {
            std::cout << "Exiting the calculator. Goodbye!" << std::endl;
            exit(0); // Exit the program
        }

        std::istringstream iss(line);
        if ((iss >> num1 >> operation >> num2)) {
            break;
        } else {
            std::cerr << "Error: Invalid input format. Please enter in the format 'num1 operation num2'.\n";
        }
    }   
}


/**
 * Performs the specified arithmetic operation on two numbers.
 * 
 * @param num1 First number
 * @param operation Character representing the operation (+, -, *, /)
 * @param num2 Second number
 * @return The result of the operation, or NaN if the operation is invalid
 */
double performOperation(double num1, char operation, double num2) {
    switch (operation) {
        case '+': return add(num1, num2);
        case '-': return subtract(num1, num2);
        case '*': return multiply(num1, num2);
        case '/': return divide(num1, num2);
        default:
            std::cerr << "Error: Unsupported operation '" << operation << "'\n";
            return std::numeric_limits<double>::quiet_NaN(); // return NaN if invalid
    }
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
    while(true) {
        double num1, num2;
        char operation;
        double result;

        printQuestion();
        takeInput(num1, operation, num2);

    
        result = performOperation(num1, operation, num2);


        cout << "Result: " << result << endl;

        std::cout << "Do you want to perform another calculation? (y/n): ";
        char choice;
        std::cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            std::cout << "Exiting the calculator. Goodbye!" << std::endl;
            break; // Exit the loop and terminate the program
        }

    }
    return 0; // Exit successfully
}