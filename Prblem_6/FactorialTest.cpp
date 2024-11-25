// test.cpp
#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    // Predefined test number
    int num = 4;
    unsigned int result = factorial(num);

    // Test condition: Check if the factorial of 4 is 24
    if (result == 24) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Not Passed" << endl;
    }

    return 0;
}
