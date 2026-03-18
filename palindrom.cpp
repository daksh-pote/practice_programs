
// 6. Palindrome Checker
// ===================================================================================================================================================== //


#include <iostream>
using namespace std;


int main() {
    int num;
    cout<<"enter count : ";
    cin>>num;
    int n=num;
    int reverse = 0;
    while(n!=0){                 //-------------------------------------------- reverse a number
        int remainder = n%10;
        reverse = reverse*10 + remainder;
        n=n/10;
    }
    if(num==reverse){                  // -------------------------------------palindrom check
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    
   
    return 0;
}
