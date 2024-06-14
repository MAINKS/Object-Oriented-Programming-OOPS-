#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string address;

    // Prompt the user for input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Consume the newline character left in the input buffer

    cout << "Enter your address: ";
    getline(cin, address);

    // Print the personal information
    cout << "\nPersonal Information:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;

    return 0;
}
