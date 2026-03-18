
//3. Printing first n even/odd numbers
// =============================================================================================================================================== //

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter count : ";
    cin>>n;
    
    // printing first n odd numbers
    int a = -1;
    cout<<"n odd numbers : ";
    for(int i=0;i<n;i++){
        a +=2;
        cout<<a<<" ";
    }
    
    cout<<endl;
    
    // printing first n even numbers
    a = 0;
    cout<<"n even numbers : ";
    for(int i=0;i<n;i++){
        a +=2;
        cout<<a<<" ";
    }
    
    
   
    return 0;
}
