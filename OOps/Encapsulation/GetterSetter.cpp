#include <iostream>
using namespace std;

class Car {
private:
    int speed;  // Private variable, cannot be accessed directly from outside the class.

public:
    // Constructor to initialize speed
    Car(int s) {
        speed = s;
    }

    // Getter method to access the private speed variable
    int getSpeed() {
        return speed;
    }

    // Setter method to modify the private speed variable
    void setSpeed(int s) {
        if(s >= 0) {  // Validation to ensure a valid speed
            speed = s;
        }
    }
};

int main() {
    Car myCar(50);  // Creating an object of Car with initial speed 50

    cout << "Current Speed: " << myCar.getSpeed() << endl;  // Accessing speed through getter

    myCar.setSpeed(70);  // Modifying speed through setter
    cout << "Updated Speed: " << myCar.getSpeed() << endl;

    // myCar.speed = 100;  // This will cause an error as speed is private

    return 0;
}