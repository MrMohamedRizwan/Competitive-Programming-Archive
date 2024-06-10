#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Customer{
    public:
    int customerId;
    string name;
    double balance;
    string password;
    long acountId;
    public:
    // Customer(int customerId,string name,double balance,string password,long acountId)
    // {
    //     this->customerId=customerId;
    //     this->name=name;
    //     this->balance=balance;
    //     this->password=password;
    //     this->acountId=acountId;
    // }
    void setCustomerId(int customerId)
    {
        this->customerId=customerId;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setBalance(double balance)
    {
        this->balance=balance;
    }
    void setPassword(string password)
    {
        this->password=password;
    }
    void setAcountId(long acountId)
    {
        this->acountId=acountId;
    }
    int getCustomerId()
    {
        return customerId;
    }   
    string getName()
    {
        return name;
    }
    double getBalance()
    {
        return balance;
    }
    string getPassword()
    {
        return password;
    }
    long getAcountId()
    {
        return acountId;
    }

    void display()
    {
        cout<<customerId<<" "<<name<<" "<<balance<<" "<<password<<" a "<<acountId<<endl;
        
    }
    
};
class solve{
public:
    void read_file(){
        // ifstream file("input.txt");

        // if (!file.is_open()) {
        //     cerr << "Failed to open the file." << endl;
        //     return 1;
        // }

        // stringstream buffer;
        // buffer << file.rdbuf();

        // string content = buffer.str();
        // cout << content << endl;

        // // split into words
        // stringstream ss(content);
        // string x;
        // while(ss>>x)
        // cout<<x;

        

        // file.close();

        ifstream file;
        file.open("input.txt");
        string line;
        int ctr=0;
        vector<Customer>CustomerList;
        while(getline(file,line)){
            istringstream iss(line);
            int id;
            string name;
            int value;
            string code;
            if((iss>>id>>name>>value>>code))
            {
                ctr++;
                // cout<<id<<" "<<name<<" "<<value<<" "<<endl;
                Customer newCus;
                newCus.setCustomerId(id);
                newCus.setName(name);
                newCus.setBalance(value);
                newCus.setPassword(code);
                CustomerList.push_back(newCus);
            }
            //  customer1.display();
            
            
        }
        file.close();
        for(auto customer:CustomerList)
        {
            customer.display(); 
        }
    }
    void getInfoFromUser()
    {
        cout<<"Hi";
        
    }
};
int main() {
    solve obj;
    obj.read_file();
        
    return 0;
}
