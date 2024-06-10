#include "Customer.h"

// Constructor definition
Customer::Customer() {}

// Member functions definitions
void Customer::setCustomerId(int id) {
    customerId = id;
}

void Customer::setName(const std::string& n) {
    name = n;
}

void Customer::setBalance(double bal) {
    balance = bal;
}

void Customer::setPassword(const std::string& pass) {
    password = pass;
}

int Customer::getCustomerId() const {
    return customerId;
}

std::string Customer::getName() const {
    return name;
}

double Customer::getBalance() const {
    return balance;
}

std::string Customer::getPassword() const {
    return password;
}
