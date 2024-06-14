#include <iostream>

int absoluteValue(int num) {
    return (num < 0) ? -num : num;
}

float absoluteValue(float num) {
    return (num < 0) ? -num : num;
}

int main() {
    int integerNumber = -10;
    float floatingPointNumber = -12.34;

    std::cout << "Absolute value of " << integerNumber << " is: " << absoluteValue(integerNumber) << std::endl;
    std::cout << "Absolute value of " << floatingPointNumber << " is: " << absoluteValue(floatingPointNumber) << std::endl;

    return 0;
}
