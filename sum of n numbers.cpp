

// 4. SUm of n natural numbers
// =========================================================================================================================================== //

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter count : ";
    cin>>n;
    
    // using loop
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    
    // using formula
    sum = (n*(n+1))/2;
    
    cout<<sum;
    
   
    return 0;
}
