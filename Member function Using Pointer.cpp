/*MAYANK 2K21/EP/59*/
#include <iostream>

class ThisPointerDemo {
private:
    int data;

public:
    ThisPointerDemo(int value) : data(value) {}

    void printData() {
        // Access data member using "this" pointer
        std::cout << "Data value (using this pointer): " << this->data << std::endl;
    }

    void modifyData(int value) {
        // Access and modify data member using "this" pointer
        this->data = value;
        std::cout << "Data value modified (using this pointer): " << this->data << std::endl;
    }
};

int main() {
    ThisPointerDemo obj(42);

    // Call member function to print data using "this" pointer
    obj.printData();

    // Call member function to modify data using "this" pointer
    obj.modifyData(123);

    return 0;
}
