#include <iostream>
#include <string>

class Employee {
public:
    std::string emp_number;
    std::string emp_name;

    void get_data() {
        std::cout << "Enter Employee Number: ";
        std::cin >> emp_number;
        std::cout << "Enter Employee Name: ";
        std::cin >> emp_name;
    }

    void display() {
        std::cout << "Employee Number: " << emp_number << std::endl;
        std::cout << "Employee Name: " << emp_name << std::endl;
    }
};

int main() {
    const int num_employees = 6;  // You can change this to the number of employees you want to input.

    Employee employee_array[num_employees];  // Create an array of Employee objects.

    for (int i = 0; i < num_employees; ++i) {
        std::cout << "Enter details for Employee " << i + 1 << ":" << std::endl;
        employee_array[i].get_data();
    }

    std::cout << "\nEmployee Details:" << std::endl;
    for (int i = 0; i < num_employees; ++i) {
        std::cout << "Details for Employee " << i + 1 << ":" << std::endl;
        employee_array[i].display();
        std::cout << std::endl;
    }

    return 0;
}
