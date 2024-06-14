/*MAYANK 2K21/EP/59*/
#include <iostream>

template <typename T>
class MaxFinder {
public:
    // Member function to find the maximum of two values
    T getMax(T a, T b) {
        return (a > b) ? a : b;
    }
};

int main() {
    // Create MaxFinder objects for different data types
    MaxFinder<int> intMaxFinder;
    MaxFinder<double> doubleMaxFinder;
    MaxFinder<char> charMaxFinder;

    // Find and display the maximum value for different data types
    int maxInt = intMaxFinder.getMax(10, 20);
    double maxDouble = doubleMaxFinder.getMax(3.14, 2.71);
    char maxChar = charMaxFinder.getMax('A', 'Z');

    std::cout << "Maximum integer: " << maxInt << std::endl;
    std::cout << "Maximum double: " << maxDouble << std::endl;
    std::cout << "Maximum character: " << maxChar << std::endl;

    return 0;
}
