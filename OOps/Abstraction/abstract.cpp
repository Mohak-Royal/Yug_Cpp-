#include<iostream>
using namespace std;

//abstract class
class Vehicle {
public:
    Vehicle(string brand, string model, double maxSpeed) : brand(brand), model(model), maxSpeed(maxSpeed) {}

    //Pure virtual functions (Abstract methods)
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Max Speed: " << maxSpeed  << " kmph" << endl;
    }

private:
    string brand;
    string model;
    double maxSpeed;
};

//concrete class
class Car : public Vehicle {
public:
    Car(string brand, string model, double maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Starting the car's engine." << endl;
    }

    void stopEngine() override {
        cout << "Stopping the car's engine." << endl;
    }
};

//Concrete Class
class Motorcycle : public Vehicle {
public:
    Motorcycle(string brand, string model, double maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Starting the motorcycle's engine." << endl;
    }

    void stopEngine() override {
        cout << "Stopping the motorcycle's engine." << endl;
    }
};

//Concrete Class
class Bicycle : public Vehicle {
public:
    Bicycle(string brand, string model, double maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Bicycles don't have any engines." << endl;
    }

    void stopEngine() override {
        cout << "Bicycles don't have any engines." << endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 120.0);
    Motorcycle motorcycle("Honda", "CBR600RR", 170.0);
    Bicycle bicycle("Trek", "FX 2", 25.0);

    car.displayInfo();
    car.startEngine();
    car.stopEngine();
    cout << endl;

    motorcycle.displayInfo();
    motorcycle.startEngine();
    motorcycle.stopEngine();
    cout << endl;

    bicycle.displayInfo();
    bicycle.startEngine();
    bicycle.stopEngine();
    cout << endl;

    return 0;
}

/*
Pure Virtual Function will be used to make a class Abstract Class.

in order to do that we need to declare a function as pure virtual function.

Syntax:
virtual void fun() = 0;

Sure, let's consider a real-world example related to the concept of an abstract class.

Imagine you are building a computer game, and in this game, you have different types of vehicles: cars, motorcycles, and bicycles. Each of these vehicles shares some common characteristics, such as a brand, a model, and a maximum speed. However, each type of vehicle also has unique features and behaviors specific to it.
In this scenario, you can use an abstract class called "Vehicle" as a blueprint for all the different types of vehicles in your game.

Whichever class will have the pure virtual function, that class will become the abstract class. and whichever class will inherit the abstract class, that class will become the concrete class. and the concrete class must have to override the pure virtual function of the abstract class.


*/