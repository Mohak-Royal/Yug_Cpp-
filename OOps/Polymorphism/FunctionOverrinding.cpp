#include<iostream>
using namespace std;

class Parent {
private:
    int privateData;
public:
    Parent() : privateData(45) {}

    virtual void displayData() {
        cout << "Private Data from Parent is " << privateData << endl;
    }
};

class Child : public Parent {
private:
    int privateData;
public:
    Child() : privateData(789) {}

    void displayData(){ 
        cout << "Private Data from Child is " << privateData << endl;
    }
};

int main() {
    Child c_obj;
    Parent p_obj;

    p_obj.displayData();
    c_obj.displayData();

    return 0;
}