#include <iostream>
using namespace std;

class Add {
public:
    int operator+(int b) {
        return b; // The left operand is implicitly *this
    }

    string operator+(const string& b) {
        return b; // The left operand is implicitly *this
    }
};

int main() {
    Add a1;
    int sum = a1 + 5; // Calling overloaded + for integers
    string concatenated = a1 + "Hello"; // Calling overloaded + for strings

    cout << "Sum: " << sum << endl;
    cout << "Concatenated: " << concatenated << endl;

    return 0;
}
