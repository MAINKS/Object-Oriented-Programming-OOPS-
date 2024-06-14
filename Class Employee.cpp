/*MAYANK 2K21/EP/59*/
#include <iostream>

class employee {
private:
    int Empnumber;
    char Enpname[100]; // Assuming a maximum of 100 characters for the employee name

public:
    void getdata() {
        std::cout << "Enter Employee Number: ";
        std::cin >> Empnumber;
        std::cout << "Enter Employee Name: ";
        std::cin.ignore(); // To clear the newline character from the input buffer
        std::cin.getline(Enpname, 100);
    }

    void display() {
        std::cout << "Employee Number: " << Empnumber << "\n";
        std::cout << "Employee Name: " << Enpname << "\n";
    }
};

int main() {
    employee empArray[6]; // Array to store details of 6 employees

    for (int i = 0; i < 6; i++) {
        std::cout << "Enter details for Employee " << i + 1 << ":\n";
        empArray[i].getdata();
    }

    std::cout << "Employee Details:\n";
    for (int i = 0; i < 6; i++) {
        std::cout << "Details for Employee " << i + 1 << ":\n";
        empArray[i].display();
    }

    return 0;
}
