#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string input, reversed; 
    
    cout << "Problem 2 in Responsi";
    cout << "\n======================";
    cout << "\nEnter the String: ";
    cin >> input; // Put the value of the string
    
    reversed = input;
    reverse(reversed.begin(), reversed.end()); // The formula to reverse the string
    
    string result = reversed; // Save the reversed string to result

    // To check the output of the program
    if (result == reversed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Not Passed" << endl;
    }
  
    return 0;
}
