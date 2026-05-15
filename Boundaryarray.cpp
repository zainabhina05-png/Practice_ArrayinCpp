
// // // // //Write a C++ program to: Create a 2D array of size m×nm \times nm×n with user input. Identify and display all the boundary elements of the matrix. (Boundary elements are elements on the edges of the matrix: first row, last row, first column, and last column). Print the matrix and the list of boundary elements.
#include<iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int arr[10][10];

    cout << "Enter matrix elements:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];

    cout << "Matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Boundary elements: ";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(i == 0 || i == m-1 || j == 0 || j == n-1) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}

