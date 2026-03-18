

//1. Fibonacci Program
//=========================================================================================================================================================================//


#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;


    // fibionacci for n terms
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int c;
    for(int i=0;i<n;i++){
        c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    
    
    // fibonacci until <n
    int a = 0, b = 1;
    if (a < n) cout << a << " ";
    if (b < n) cout << b << " ";

    while (true) {
        int next = a + b;
        if (next >= n) break;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}
