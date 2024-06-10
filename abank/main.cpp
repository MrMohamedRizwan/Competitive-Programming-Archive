#include <iostream>
#include "Customer.h" // Include the header file

int main() {
    // Create an instance of the Customer class
    Customer customer1;

    // Set values using member functions
    customer1.setCustomerId(1);
    customer1.setName("John");
    customer1.setBalance(1000.0);
    customer1.setPassword("123456");

    // Display values using getter functions
    std::cout << "Customer ID: " << customer1.getCustomerId() << std::endl;
    std::cout << "Name: " << customer1.getName() << std::endl;
    std::cout << "Balance: " << customer1.getBalance() << std::endl;
    std::cout << "Password: " << customer1.getPassword() << std::endl;

    return 0;
}
