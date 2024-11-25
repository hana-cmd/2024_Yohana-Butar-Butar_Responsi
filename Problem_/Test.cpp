THE SECOND LARGER NUMBER
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function to find the second largest element
int getSecondLargest(vector <int> & arr) {
    int n = arr.size();
    
    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());
  
    // start from second last element as last element is the largest
    for (int i = n - 2; i >= 0; i--) {
      
        // return the first element which is not equal to the 
        // largest element
        if (arr[i] != arr[n - 1]) {
            return arr[i];
        }
    }
  
    // If no second largest element was found, return -1
    return -1;
}

int main() {
    cout << "The Second LaRGER Nmuber is :";
    vector<int> arr = { 12, 35, 1, 10, 34, 1 };
    cout<<getSecondLargest(arr);
    return 0;
}

SUM OF DIGIT
#include <iostream>  
using namespace std;  

int main()  
{  
    int n,sum=0,m;    
    cout<<"Enter a number: ";    
    cin>>n;    

    while(n>0)    
    {    
      m=n%10;    
      sum=sum+m;    
      n=n/10;    
    }    

   cout<<"The Sum of Digit: "<<sum <<endl;    
   
return 0;  
}  



CHECK PRIME NUMBER
#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

