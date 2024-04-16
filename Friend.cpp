#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Declare the friend function
    friend void printArea(const Rectangle& rect);
};

// Define the friend function
void printArea(const Rectangle& rect) {
    int area = rect.length * rect.width;
    cout << "Area of the rectangle: " << area << endl;
}

int main() {
    cout<<"PROGRAM FOR FRIEND FUNCTION"<<endl;
    Rectangle rect(5, 4);
    printArea(rect);  // Call the friend function to calculate and print the area

    return 0;
}
