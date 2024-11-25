#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string input, reversed; //the formula for reverse the string
    
    cout << "Enter the String: " << input; //put the value of the string
    
    reversed = input;
    reverse(reversed.begin(), reversed.end()); //the formula to reverse the string
    
    unsigned string result = reversed; //the output of the program

    // To Check the output of thr program
    if (result == reversed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Not Passed" << endl;
    }
  
    return 0;
}

