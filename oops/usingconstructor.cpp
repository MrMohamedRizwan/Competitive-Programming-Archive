#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <limits> // For numeric_limits

class Customer {
public:
    // Constructor to initialize with default minimum balance
    Customer(int id, const std::string& n, double bal, const std::string& pass, long accId) :
        customerId(id), name(n), balance(bal), password(pass), accountId(accId) {
        if (balance < minBalance) {
            balance = minBalance; // Ensure balance is at least the minimum
        }
    }

    // Member functions to get values
    int getCustomerId() const {
        return customerId;
    }

    std::string getName() const {
        return name;
    }

    double getBalance() const {
        return balance;
    }

    std::string getPassword() const {
        return password;
    }

    long getAccountId() const {
        return accountId;
    }

    void display() const {
        std::cout << customerId << " " << name << " " << balance << " " << password << " " << accountId << std::endl;
    }

private:
    int customerId;
    std::string name;
    double balance;
    std::string password;
    long accountId;

    static constexpr double minBalance = 1000000; // Minimum balance
};

int main() {
    std::vector<Customer> customers;

    // Create a temporary Customer object and push it into the vector
    customers.emplace_back(1101, "kumar", 10000, "asdfgh", 123456);
    customers.emplace_back(1102, "Roja", 20000, "yfgjm", 654321);

    // Display customers
    for (const auto& customer : customers) {
        customer.display();
    }

    return 0;
}
