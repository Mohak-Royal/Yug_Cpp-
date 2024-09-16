#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;


    // 3 Types of constructor

    // default
    Person(){
        cout << "Default Constructor called";
        name = "unknown";
        age = 0;
    }

    // Perameterized Constructor
    Person(string n , int a){
        cout << "Parameterized Constructor Called!";
        name = n;
        age = a;
    }
    
    // Copy Constructor
    Person(const Person &obj){
        cout << "Copy Constructor Called!";
        name = obj.name;
        age = obj.age;
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