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
    cin >> input; //put the value of the string
    
    reversed = input;
    reverse(reversed.begin(), reversed.end()); //the formula to reverse the string
    
    cout << "Reversed String: " << reversed << endl; //the output of the program
    
    return 0;
}
