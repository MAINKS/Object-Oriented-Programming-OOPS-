#include <iostream>
using namespace std;

// Class definition
class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

// Function that creates and returns an object
MyClass createObject(int val) {
    MyClass obj(val);
    return obj; // Returning object by value
}

// Function that takes an object as an argument and uses it
void useObject(const MyClass &obj) {
    cout << "Object received: ";
    // obj.display();
}

int main() {
    int num = 42;

    // Creating an object within the createObject function and returning it
    MyClass newObj = createObject(num);

    // Using the returned object in another function
    useObject(newObj);

    return 0;
}
