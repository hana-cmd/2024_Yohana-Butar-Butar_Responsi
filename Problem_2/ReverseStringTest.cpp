#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string input = 1234;
    string reversed; //the formula for reverse the string
    
    cout << "Enter the String: " << input; //put the value of the string
    
    reversed = input;
    reverse(reversed.begin(), reversed.end()); //the formula to reverse the string
    
    unsigned int result = factorial(num); //the output of the program

    // Test condition: Check if the factorial of 4 is 24
    if (result == 24) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Not Passed" << endl;
    }
  
    return 0;
}

