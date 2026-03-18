

// 7. reverse a string 
// =========================================================================================================================================================== //


#include <iostream>
#include<string>

using namespace std;

int main() {
    string original;
    string reverse = "";
    
    cout<<"enter string : ";
    getline(cin,original);
    cout<<original;
    
    int n = original.length();
    for(int i = n-1;i>=0;i--){
        reverse += original[i];
    }
    
    cout<<endl<<reverse;
    return 0;
}
