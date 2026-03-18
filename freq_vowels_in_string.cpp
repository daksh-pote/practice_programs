#include <iostream>
#include<string>
#include<set>


using namespace std;


int main() {
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    int n =  str.length();
    
    set<char> s = {'a','e','i','o','u'};
    // for(int i=0;i<n;i++){
    //     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
    //         s.insert(str[i]);
    //     }
        
    // }
    for(char x : s){
        cout << x << " ";
    }
    cout<<endl;
    for(char x : s){
        int count=0;
        for(int i=0;i<n;i++){
            if(str[i] == x){
                count += 1;
            }
        }
        cout<<"freq of "<<x<<" in string is : "<<count<<endl;
    }
    
    return 0;
}
