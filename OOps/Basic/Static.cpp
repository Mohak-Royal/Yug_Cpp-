// static keyword is used to make a variable or function static.
// when you use static keyword with a variable/method then that variable/method gets memory in data segment of the program instead of getting memory in stack segment of the program.
// static variable/method can be accessed without creating an object of the class. 
// why?
// because static variable/method gets memory in data segment of the program instead of getting memory in stack segment of the program.


#include<iostream>
using namespace std;


class Account{
    public:
        static int count;

        Account(){
            count++;
        }


        int getCount(){
            return count;
        }
};


int Account::count = 0;




int main(){
    cout << "Starting Count: " << Account::count ;  

    Account a1;
    Account a2;


    cout << "\nCount: " << Account::count;
}