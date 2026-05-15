// // // // //Write a C++ program to:Create a 2D array of size m×nm \times nm×n with user input.Calculate the sum of each row and each column separately.Display the matrix, row sums, and column sums..
#include<iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int arr[10][10], rowSum[10] = {0}, colSum[10] = {0};

    cout << "Enter matrix elements:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }

    cout << "Matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << "| Row sum: " << rowSum[i] << endl;
    }

    cout << "Column sums: ";
    for(int j=0;j<n;j++)
        cout << colSum[j] << " ";
    cout << endl;

    return 0;
}
