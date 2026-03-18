

// 9. Stirng Case convertor (lower -> upper/ upper -> lower)
// --------------------------------------------------------------------------------------------------------------------------------------------------- //

#include <iostream>
#include<string>
#include<set>


using namespace std;


int main() {
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    int n =  str.length();
    
    // lowercase to uppercase
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
    }
    
    // uppercase to lowercase
    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    
    cout<<str;
    
    return 0;
}
