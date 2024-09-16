#include<iostream>
using namespace std;

// 
class Customer {
private:
   string name;
   int accoutNumber;
   double balance;
public:
   Customer() {}

   Customer(string n, int accNo, double bal) : name(n), accoutNumber(accNo), balance(bal) {}

   void displayInfo() {
      cout << "Name: " << name << ", Account Number: " << accoutNumber << ", Balance: Rs." << balance << endl;
   }
};

class Bank {
private:
   string bankName;
   Customer* customers;  //Aggregation - Array of customer pointer
   int capacity;
   int size;

public:
   Bank(string n, int cap) : bankName(n), capacity(cap), size(0) {
      customers = new Customer[capacity];
   }

   ~Bank() {
      delete[] customers;
   }

   void addCustomer(Customer& customer) {
      if(size < capacity) {
         customers[size++] = customer;
      } else {
         cout << "Cannot add more customers. Bank capacity reached." << endl;
      }
   }

   void display() {
      cout << "Customers of " << bankName << ":\n";
      for (int i = 0; i < size; i++) {
         customers[i].displayInfo();
      }
   }
};


int main() {
    //
   Bank pnb("Punjab National Bank", 5);

   Customer c1("Meet", 1022, 500000);
   Customer c2("Himesh", 1032, 450000);
   Customer c3("Mohak", 420, 10);
   Customer c4("Dhruv", 5563, 1000000);
   Customer c5("Zafar Sir", 8876, 5000000);

   pnb.addCustomer(c1);
   pnb.addCustomer(c2);
   pnb.addCustomer(c3);
   pnb.addCustomer(c4);
   pnb.addCustomer(c5);

    pnb.display();


    return 0;

}