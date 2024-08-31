#include <iostream>

// Define the Complex class
class Complex {
public:
    // Constructor to initialize the complex number
    Complex(double real = 0.0, double imag = 0.0) : realPart(real), imagPart(imag) {}

    // Overload the subtraction operator
    Complex operator-(const Complex& other) const {
        return Complex(realPart - other.realPart, imagPart - other.imagPart);
    }

    // Friend function to overload the stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);

private:
    double realPart;
    double imagPart;
};

// Overload the stream insertion operator to print Complex numbers
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.realPart;
    if (c.imagPart >= 0)
        os << " + " << c.imagPart << "j";
    else
        os << " - " << -c.imagPart << "j";
    return os;
}

// Main function to demonstrate the use of the overloaded operator
int main() {
    // Create two Complex objects
    Complex c1(4, 7);
    Complex c2(1, 2);

    // Subtract the two Complex objects using the overloaded operator
    Complex result = c1 - c2;

    // Print the result
    std::cout << "The result of subtracting " << c2 << " from " << c1 << " is " << result << std::endl;

    return 0;
}
