

// 9 . Matrix Addition
// ========================================================================================================================================== //

// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<vector>


using namespace std;

// Function to fill the matrix with user input
void inputMatrix(vector<vector<int>> &mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "] : ";
            cin >> mat[i][j];
        }
    }
}

// Function to print the matrix nicely
void displayMatrix(const vector<vector<int>> &mat) {
    for (const auto &row : mat) {
        cout << "|";
        for (int val : row) {
            cout << " " << val << " ";
        }
        cout << "|" << endl;
    }
}   


int main() {
    int m,n;
    cout<<"enter value of m : ";
    cin>>m;
    cout<<"enter value of n : ";
    cin>>n;
    // int matA[m][n];
    // int matB[m][n];
    vector<vector<int>> matA(m, vector<int>(n));
    vector<vector<int>> matB(m, vector<int>(n));
    vector<vector<int>> sum(m, vector<int>(n));
    
    // cout<<"enter matrixA : "<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"enter matrix element ["<<i<<"]["<<j<<"] : ";
    //         cin>>matA[i][j];
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     cout<<"|";
    //     for(int j=0;j<n;j++){
    //         cout<<" "<<matA[i][j]<<" ";
    //     }
    //     cout<<"|";
    //     cout<<endl;
    // }
    
    cout<<"enter MatrixA : "<<endl;
    inputMatrix(matA, m, n);
    cout << "\nYour Matrix:\n";
    displayMatrix(matA);
    cout<<endl;
    
    cout<<"enter MatrixB : "<<endl;
    inputMatrix(matB, m, n);
    cout << "\nYour Matrix:\n";
    displayMatrix(matB);
    cout<<endl;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           sum[i][j] = matA[i][i] + matB[i][j]; 
        }
    }
    cout<<"sum of matA + matB = "<<endl;
    displayMatrix(sum);
    
    
    return 0;
}
