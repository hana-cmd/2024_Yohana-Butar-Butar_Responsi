#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n)
{
   if (n == 0) //the formula of the factorial
     return 1;
   return n * factorial (n - 1); //use this function to calculate the factorial
}

int main () {
    int num = 4; //the value 

    cout << "Problem 6 in Responsi";
    cout << "\n======================";
    cout << "\nEnter NUmber of " << num << " is: " //the output of the program
         << factorial (num) << endl;

  return 0;
}
