#include <iostream>
using namespace std;

class Array {
public:
    int value; // Renamed 'arr' to 'value' for clarity

    // Constructor initializes the 'value' variable to 1
    Array() : value(1) {}

    // Overloading the unary minus operator to negate the 'value' variable
    Array operator-() {
        this->value = -value;
        return *this;
    }
};

int main() {
    Array arrayObj; // Renamed 'ar' to 'arrayObj' for clarity

    // Printing the initial value of 'value'
    cout << arrayObj.value << endl;

    // Negating the 'value' using the overloaded '-' operator
    -arrayObj;

    // Printing the negated value of 'value'
    cout << arrayObj.value << endl;

    return 0;
}
