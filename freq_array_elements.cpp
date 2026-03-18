

// 8. Count freq of elements in array
// ============================================================================================================================================================ //


include <iostream>
#include<string>
#include<set>

using namespace std;


int main() {
    int n;
    cout<<"enter the count of numbers : ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cout<<"enter element : ";
        cin>>arr[i];
    }
    
    // count freq of each element in array
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x : s){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == x){
                count++;
            }
        }
        cout<<"freq of "<<x<<" is : "<<count<<endl;
    } 
    
    return 0;
}
