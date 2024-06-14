/*MAYANK 2K21/EP/59*/
#include <iostream>
#include <string>

class StringOperations {
private:
    std::string str;

public:
    StringOperations() : str("") {}

    StringOperations(const std::string& s) : str(s) {}

    // Overload the + operator for string concatenation
    StringOperations operator+(const StringOperations& other) {
        return StringOperations(str + other.str);
    }

    // Overload the == operator for string comparison
    bool operator==(const StringOperations& other) {
        return str == other.str;
    }

    // Get the string
    std::string getString() {
        return str;
    }
};

int main() {
    std::string input1, input2;

    // Input two strings
    std::cout << "Enter the first string: ";
    std::cin >> input1;
    std::cout << "Enter the second string: ";
    std::cin >> input2;

    // Create StringOperations objects from the input strings
    StringOperations str1(input1);
    StringOperations str2(input2);

    // Perform string concatenation using operator overloading
    StringOperations concatenated = str1 + str2;

    // Check if the two strings are equal
    bool areEqual = (str1 == str2);

    // Display the concatenated string and the result of the comparison
    std::cout << "Concatenated string: " << concatenated.getString() << std::endl;
    if (areEqual) {
        std::cout << "The two strings are equal." << std::endl;
    } else {
        std::cout << "The two strings are not equal." << std::endl;
    }

    return 0;
}
