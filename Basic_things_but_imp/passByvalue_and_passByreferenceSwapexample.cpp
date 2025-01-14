#include <iostream>
using namespace std;

// Swapping by value (does not affect original variables)
void a2(int a, int b) {
    int temp = a; 
    a = b;
    b = temp;
    cout << "I'm in pass-by-value function: a = " << a << ", b = " << b << endl;
}

// Swapping by reference (affects original variables)
void a1(int &a, int &b) {
    int temp = a; 
    a = b;
    b = temp;
    cout << "I'm in pass-by-reference function: a = " << a << ", b = " << b << endl;
}

int main() {
    int a, b;
    a = 4;
    b = 6;

    // Printing initial values
    cout << "Before anything, a = " << a << ", b = " << b << endl;

    // Call the pass-by-value function
    a2(a, b);
    cout << "After pass-by-value function, a = " << a << ", b = " << b << endl;

    // Call the pass-by-reference function
    a1(a, b);
    cout << "After pass-by-reference function, a = " << a << ", b = " << b << endl;
    // we can clearly see that in call by value the  modifications done in function doesn't show after function
    // whereass in call by references it shows.
    
    return 0;
}
