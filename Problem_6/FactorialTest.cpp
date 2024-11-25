#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n)
{
   if (n == 0) //the formula of the factorial
     return 1;
   return n * factorial (n - 1);   
}

int main () {
    int num = 4;

    cout << "Problem 6 in Responsi";
    cout << "\n======================";
    unsigned int result = factorial(num);

    // Test condition: Check if the factorial of 4 is 24
    if (result == 24) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Not Passed" << endl;
    }

    return 0;
}
