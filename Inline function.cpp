/*MAYANK 2K21/EP/59*/
#include <iostream>

// Inline function for addition
inline double add(double a, double b) {
    return a + b;
}

// Inline function for subtraction
inline double subtract(double a, double b) {
    return a - b;
}

// Inline function for multiplication
inline double multiply(double a, double b) {
    return a * b;
}

// Inline function for division
inline double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0;
    }
}

int main() {
    double num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform arithmetic operations using inline functions
    double sum = add(num1, num2);
    double difference = subtract(num1, num2);
    double product = multiply(num1, num2);
    double quotient = divide(num1, num2);

    // Display the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
