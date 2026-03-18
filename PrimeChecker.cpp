
// 5. Prime Number Checker
// ========================================================================================================================================================= //


#include <iostream>
using namespace std;
int primechecker(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) {
            cout<<"non-prime";
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cout<<"enter count : ";
    cin>>n;
    
    int prime = primechecker(n);
    if(prime == 1){
        cout<<"prime";
    }
   
    return 0;
}
