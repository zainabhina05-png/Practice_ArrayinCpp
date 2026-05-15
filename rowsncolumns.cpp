// // // // //Write a C++ program to: Create two matrices AAA (m×nm \times nm×n) and BBB (n×pn \times pn×p) with dimensions and values provided by the user.Multiply the matrices AAA and BBB, storing the result in a third matrix CCC. Display all three matrices in proper matrix format.
#include<iostream>
using namespace std;
int main() {
    int m, n, p;
    cout << "Enter rows and columns for matrix A (m n): ";
    cin >> m >> n;
    cout << "Enter columns for matrix B (p): ";
    cin >> p;

    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Enter elements of matrix A:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
            cin >> B[i][j];

    
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            for(int k=0;k<n;k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Matrix A:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    cout << "Matrix B:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<p;j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    cout << "Matrix C (A x B):\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}