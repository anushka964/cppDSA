#include <iostream>

class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int val) : value(val) {}

    // Overloading unary operator + for addition
    MyNumber operator+() const {
        // Unary plus performs addition with the value itself
        return MyNumber(value + value);
    }

    // Overloading unary operator + for multiplication
    MyNumber operator+() const {
        // Unary plus performs multiplication by doubling the value
        return MyNumber(value * value);
    }

    // Getter method to retrieve the value
    int getValue() const {
        return value;
    }
};

int main() {
    MyNumber num(5);

    // Using unary operator + for addition
    MyNumber result1 = +num;
    std::cout << "Result of Addition: " << result1.getValue() << std::endl;

    // Using unary operator + for multiplication
    MyNumber result2 = +num;
    std::cout << "Result of Multiplication: " << result2.getValue() << std::endl;

    return 0;
}
