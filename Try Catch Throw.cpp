/*MAYANK 2K21/EP/59*/
#include <iostream>
#include <stdexcept>

void throwExceptions(int choice) {
    switch (choice) {
        case 1:
            // Division by zero exception
            throw std::runtime_error("Division by zero is not allowed.");
            break;
        case 2: {
            // Array index out of bounds exception
            int arr[3] = {10, 20, 30};
            int index = 4;  // Index out of bounds
            if (index < 0 || index >= 3) {
                throw std::out_of_range("Array index out of bounds.");
            }
            std::cout << "Array element at index " << index << ": " << arr[index] << std::endl;
            break;
        }
        default:
            break;
    }
}

int main() {
    int choice;
    
    std::cout << "Choose an exception to simulate:\n1. Division by zero\n2. Array index out of bounds\n";
    std::cin >> choice;

    try {
        throwExceptions(choice);
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime Error: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of Range Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown Exception" << std::endl;
    }

    return 0;
}
