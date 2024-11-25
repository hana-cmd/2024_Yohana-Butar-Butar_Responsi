AREA OF THE CIRCLE
#include <iostream>
const double pi = 3.14;
using namespace std;

float findArea (float r)
{
    return (pi * r *r);
}

int main() 
{
    float r, Area;
    r = 5;
    
    Area = findArea(r);
    
    cout << "Area of the Circle: " << Area;
    
   return 0;
    
}

REVERSE A STRING
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string input, reversed;
    
    cout << "Enter the String: ";
    cin >> input;
    
    reversed = input;
    reverse(reversed.begin(), reversed.end());
    
    cout << "Reversed String: " << reversed << endl;
    
    return 0;
}

COUNT ODD AND EVEN NUMBER
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num, oddCount = 0, evenCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Odd numbers: " << oddCount << endl;
    cout << "Even numbers: " << evenCount << endl;

    return 0;
}




FIND MAX IN LIST
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    int n, num, maxNum = INT_MIN;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > maxNum)
            maxNum = num;
    }

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}



PALIDROME CHECK
#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  
