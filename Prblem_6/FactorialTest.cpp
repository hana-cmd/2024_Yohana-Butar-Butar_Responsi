#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n)
{
   if (n == 0)
     return 1;
   return n * factorial (n - 1);   
}

int main () {
    int num = 4;

    cout << "Enter NUmber of " << num << " is: "
         << factorial (num) << endl;

if (result == 24) {
    cout << "Test Passed";
} else {
  cout << "Test not Passed";
  
  return 0;
}
