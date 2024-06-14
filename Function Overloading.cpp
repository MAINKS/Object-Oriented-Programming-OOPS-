/*MAYANK 2K21/EP/59*/
#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two double values
double add(double a, double b) {
    return a + b;
}

int main() {
    // Call the overloaded functions with different arguments
    int sum1 = add(5, 3);
    int sum2 = add(7, 2, 4);
    double sum3 = add(3.5, 2.7);

    // Display the results
    std::cout << "Sum of two integers: " << sum1 << std::endl;
    std::cout << "Sum of three integers: " << sum2 << std::endl;
    std::cout << "Sum of two double values: " << sum3 << std::endl;

    return 0;
}
