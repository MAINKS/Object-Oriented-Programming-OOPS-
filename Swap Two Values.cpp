/*MAYANK 2K21/EP/59*/
#include <iostream>

// Function to swap two numbers by value
void swapByValue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// Function to swap two numbers by reference
void swapByReference(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display the original numbers
    std::cout << "Original numbers: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap by value (without changing original values)
    swapByValue(num1, num2);
    std::cout << "After swap by value: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap by reference (changes the original values)
    swapByReference(num1, num2);
    std::cout << "After swap by reference: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
