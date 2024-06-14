/*MAYANK 2K21/EP/59*/
#include <iostream>

class AccessDemo {
public:
    // Public member function to access public member
    void accessPublicMember() {
        std::cout << "Accessing publicMember: " << "publicMember" << std::endl;
    }

private:
    int privateMember = 42;

public:
    // Public member function to access private member
    void accessPrivateMember() {
        std::cout << "Accessing privateMember: " << privateMember << std::endl;
    }

protected:
    int protectedMember = 123;

public:
    // Public member function to access protected member
    void accessProtectedMember() {
        std::cout << "Accessing protectedMember: " << protectedMember << std::endl;
    }
};

int main() {
    AccessDemo obj;

    // Access public member using a public member function
    obj.accessPublicMember();

    // Access private member using a public member function
    obj.accessPrivateMember();

    // Access protected member using a public member function
    obj.accessProtectedMember();

    return 0;
}
