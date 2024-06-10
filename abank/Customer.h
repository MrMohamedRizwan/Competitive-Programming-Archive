#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    // Constructor
    Customer();

    // Member functions declarations
    void setCustomerId(int id);
    void setName(const std::string& name);
    void setBalance(double balance);
    void setPassword(const std::string& password);
    int getCustomerId() const;
    std::string getName() const;
    double getBalance() const;
    std::string getPassword() const;

private:
    // Member variables
    int customerId;
    std::string name;
    double balance;
    std::string password;
};

#endif
