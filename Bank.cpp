/*MAYANK 2K21/EP/59*/
#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string ownerName;
    double initialBalance;
    double interestRate;
    double currentBalance;

public:
    BankAccount(int accNumber, const std::string &owner, double balance, double rate) {
        accountNumber = accNumber;
        ownerName = owner;
        initialBalance = balance;
        interestRate = rate;
        currentBalance = initialBalance;
    }

    void deposit(double amount) {
        currentBalance += amount;
    }

    void withdraw(double amount) {
        if (amount <= currentBalance) {
            currentBalance -= amount;
        } else {
            std::cout << "Insufficient balance for withdrawal." << std::endl;
        }
    }

    void calculateInterest() {
        currentBalance += (currentBalance * interestRate / 100);
    }

    double checkBalance() {
        return currentBalance;
    }
};

int main() {
    int accNumber;
    std::string ownerName;
    double initialBalance, interestRate;

    std::cout << "Enter account number: ";
    std::cin >> accNumber;
    std::cout << "Enter owner's name: ";
    std::cin.ignore(); // To consume the newline character
    std::getline(std::cin, ownerName);
    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;
    std::cout << "Enter interest rate: ";
    std::cin >> interestRate;

    BankAccount account(accNumber, ownerName, initialBalance, interestRate);

    int choice;
    double amount;

    do {
        std::cout << "\nBank Account Operations:\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Calculate Interest\n";
        std::cout << "4. Check Balance\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the amount to deposit: ";
                std::cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                std::cout << "Enter the amount to withdraw: ";
                std::cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.calculateInterest();
                std::cout << "Interest calculated and added to the balance." << std::endl;
                break;
            case 4:
                std::cout << "Current Balance: " << account.checkBalance() << std::endl;
                break;
            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
