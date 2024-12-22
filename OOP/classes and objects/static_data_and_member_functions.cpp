#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member

    // Constructor to increment count when object is created
    Counter() {
        count++;
    }

    // Static member function to access static data member
    static void displayCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Definition of static data member (must be outside the class)
int Counter::count = 0;

int main() {
    // Creating static object
    static Counter obj1;  // Static object obj1

    // Creating regular objects
    Counter obj2;
    Counter obj3;

    // Accessing static function using class name
    Counter::displayCount();  // Should display 3

    // Accessing static function using object
    obj1.displayCount();      // Should also display 3
    cout<<Counter::count<<endl; // static variables can also be accessed using scope resolution
    return 0;
}
