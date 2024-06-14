/*Mayank 2K21/EP/59*/
#include <iostream>

// Forward declaration of FriendFunc1 class
class FriendFunc1;

// Friend function to calculate the average of numbers
void calculateAverage(const FriendFunc1 &obj);

class FriendFunc1 {
private:
    double num1, num2, num3, num4, num5;

public:
    // Constructor to initialize the numbers
    FriendFunc1(double n1, double n2, double n3, double n4, double n5)
        : num1(n1), num2(n2), num3(n3), num4(n4), num5(n5) {}

    // Declare the friend function
    friend void calculateAverage(const FriendFunc1 &obj);
};

// Friend function definition
void calculateAverage(const FriendFunc1 &obj) {
    double average = (obj.num1 + obj.num2 + obj.num3 + obj.num4 + obj.num5) / 5.0;
    std::cout << "Average of the numbers: " << average << std::endl;
}

int main() {
    double n1, n2, n3, n4, n5;

    // Input five different numbers
    std::cout << "Enter five different numbers: ";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Create an object of FriendFunc1 class and pass the numbers to the constructor
    FriendFunc1 obj(n1, n2, n3, n4, n5);

    // Call the friend function to calculate the average
    calculateAverage(obj);

    return 0;
}
