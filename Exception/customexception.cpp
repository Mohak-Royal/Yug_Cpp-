#include <iostream>
#include <exception>
using namespace std;

// Define a custom exception class inheriting from std::exception
class DivisionByZeroException : public exception {
public:
    // Override the what() method to provide a custom error message
    const char* what() const throw() {
        return "Error: Division by zero is not allowed!";
    }
};

// Function that performs division and throws custom exception if divisor is zero
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw DivisionByZeroException();  // Throw custom exception
    }
    return numerator / denominator;
}

int main() {
    double num, den;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try {
        // Try to perform division
        double result = divide(num, den);
        cout << "Result: " << result << endl;
    }
    catch (const DivisionByZeroException& e) {
        // Catch custom exception and display the custom error message
        cout << e.what() << endl;
    }

    return 0;
}