// This Keyword: 
// > It is a keyword which is used as a pointer which points to the current object.
// > It is used to access the instance variables of the current object.
// > It is used to access the methods of the current object.
// > It is used to access the constructor of the current object.
// > It is used to return the current object from the method.
// > It is used to pass the current object as a parameter to the method.

#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        cout << "Default Constructor called";
        name = "unknown";
        age = 0;
    }

    Person(string name , int age){
        cout << "Parameterized Constructor Called!";
        this->name = name;
        this->age = age;
    }
    
    Person(const Person &obj){
        cout << "Copy Constructor Called!";
        name = obj.name;
        age = obj.age;
    }

    void setName(string name){
        this->name = name;
    }
};


int main(){
    // Person p1;
    Person p2("Yug" , 20);

    Person p3(p2);

    // cout << endl << p1.name;
    // cout << endl << p1.age;

    // cout << endl << p2.name;
    // cout << endl << p2.age;

    cout << endl << p3.name;
    cout << endl << p3.age;
}