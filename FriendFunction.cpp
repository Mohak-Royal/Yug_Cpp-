// a friend function is a function that is given special access to the private and protected members of a class, even though it is not a member of that class.

#include<iostream>
using namespace std;

// class Box{
//     private:
//         double width;

//     public:
//         Box(){
//             width = 0;
//         }

//     // fn declaration

//     friend void setWidth(Box &b , double w);  
// };


// // fn definition

// void setWidth(Box &b , double w){
//     b.width = w;
//     cout << b.width;
// }

// int main(){
//     Box box;

//     setWidth(box , 10.3);
// }


class BankAccount{
    private: 

        string accountHolderName;
        double balance;

    public: 

        BankAccount(string accountHolderName , double balance){
            this->accountHolderName = accountHolderName;
            this->balance = balance;
        }

        void deposit(double amount){
            balance += amount;
        }


        void  withdraw(double amount){
            if (amount <= balance){
                balance -= amount;
            }else{
                cout << "Insufficient balance!" << endl;
            }
        }

        friend void checkBalance(BankAccount &account);
};

void checkBalance(BankAccount &account){
    cout << "Account holder: " << account.accountHolderName << endl;
    cout << "Current Balance: $" << account.balance << endl;
}


int main(){
    BankAccount account("Yug" , 1000000.0);

    account.withdraw(500000);
    account.deposit(10000);

    checkBalance(account);
}