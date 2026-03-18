

// 7. Sample Array Programs
// ============================================================================================================================================================= //

#include <iostream>
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
    
    // printing array elements
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    // finding largest element in a array
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    cout<<endl<<max;
    
    
    // reversing a array
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
    
    
    // sum of elements of array
    int sum = 0,i=0;
    for(;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;

    return 0;
}
