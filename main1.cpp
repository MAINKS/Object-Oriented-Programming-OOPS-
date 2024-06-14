#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string address;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore(); // Clear the newline character left in the input buffer

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "\nPrinting Personal Details\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;

    return 0;
}
