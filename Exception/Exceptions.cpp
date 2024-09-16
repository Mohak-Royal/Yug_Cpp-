#include <iostream>
#include <string>
using namespace std;


float division(int x, int y) {
    if(y == 0) {
        throw "Division by zero condition!";
    }
    return x/y;
}

int main() {

    cout << "Before exception" << endl;
    
    try {
        cout << division(25, 0) << endl;
    } catch(const char* e) {
        cerr << e << endl;
    }
    cout << "After exception" << endl;

    return 0;
}