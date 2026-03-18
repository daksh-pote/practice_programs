
// 2. Factorial of a Number
// =====================================================================================================================================//



#include <iostream>
using namespace std;

int factorial(int n){
   if(n==1){
       return 1;
   }
   else{
       return n*factorial(n-1);
   }
   
}

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    
    
    // factorial of a number using for loop
    int fact = 1;
    for(int i=n;i>0;i--){
        fact *= i;
    }
    cout<<fact;
    
    
    // factorial using recursion
    int fact = factorial(n);
    cout<<fact;
    
    return 0;
}
