//Problem1
// #include<iostream>
// using namespace std;
// int main () {
//     int row, columns;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<"Enter the number of columns: ";
//     cin>>columns;
//     int matrix[row][columns], sum=0;
//     cout<<"Enter the elements of matrix: ";
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<columns; j++) {
//             cin>>matrix[i][j];
//             sum+=matrix[i][j];
//         }
//     }
//     cout<<"Sum of elements of matrix is "<<sum<<endl;
//     return 0;
// }

//Problem2 max value in the matrix
// #include<iostream>
// using namespace std;
// int main () {
//     int row, col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<"Enter the number of columns: ";
//     cin>>col;
//     int matrix[row][col];
//     cout<<"Enter the elements of matrix: ";
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cin>>matrix[i][j];
//         }
//     }
//     int maxValue=matrix[0][0];
//     for (int i=0;i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if (matrix[i][j]>maxValue) {
//                 maxValue=matrix[i][j];
//             }
//         }
//     }
//     cout<<"The maximum value in the matrix is "<<maxValue<<endl;
//     return 0;
// }

//Problem2b max value in each row
// #include<iostream>
// using namespace std;
// int main () {
//     int row, col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<"Enter the number of columns: ";
//     cin>>col;
//     int matrix[row][col];
//     cout<<"Enter the elements of matrix: ";
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"Maximum value in each row: ";
//     for (int i=0; i<row; i++) {
//         int maxvalue=matrix[i][0];
//         for (int j=0; j<col; j++) {
//             if (matrix[i][j]>maxvalue) {
//                 maxvalue=matrix[i][j];
//             }
//         }
//         cout<<"Row "<<i+1<<";"<<maxvalue<<endl;
//     }
//     return 0;
// }

//Problem3 sum of each column
// #include<iostream>
// using namespace std;
// int main () {
//     int row, col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<"Enter the number of columns: ";
//     cin>>col;
//     int matrix[row][col], sum=0;
//     cout<<"Enter the elements of matrix: ";
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"Sum of each column; ";
//     for (int j=0; j<col; j++) {
//         int colsum=0;
//         for (int i=0; i<row; i++){
//             colsum+=matrix[i][j];
//     }
//     cout<<"Column"<<j+1<<": "<<colsum<<endl;
// }
//     return 0;
// }

//problem4 find diagonal sum
// #include<iostream>
// using namespace std;
// int main () {
//     int row, col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<"Enter the number of columns: ";
//     cin>>col;
//     int matrix[row][col], digsum=0;
//     cout<<"Enter the elements of matrix: ";
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"Diagonal sum; ";
//     for (int i=0; i<row; i++) {
//             digsum+=matrix[i][i];
//     }
//         cout<<"Diagonal sum is "<<digsum<<endl;
//     return 0;
// }

//Problem5 transpose elements
// #include<iostream>
// using namespace std;
// int main () {
//     int row, col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<"Enter the number of columns: ";
//     cin>>col;
//     int matrix[row][col], transpose[col][row];
//     for (int i=0; i<row; i++) {
//         for (int j=0;j<col; j++) {
//         }
//     }
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             transpose[j][i]=matrix[i][j];
//         }
//     }
//     cout<<"Enter the transpose matrix: ";
//     for (int i=0; i<col; i++) {
//         for (int j=0; j<row;j++) {
//             cout<<"Transpose matrix is: "<<transpose[j][i];
//         }
//     }
//     cout<<endl;
// }

//Problem6
// #include <iostream>
// using namespace std;
// void multiplyMatrices(int A[][10], int B[][10], int C[][10], int r1, int c1, int r2, int c2) {
//     if (c1 != r2) {
//         cout << "Matrix multiplication is not possible due to dimension mismatch." << endl;
//         return;
//     }
//
//     // Initialize the result matrix C with zeros
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             C[i][j] = 0;
//             for (int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }
//
// // Function to display a matrix
// void displayMatrix(int matrix[][10], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main() {
//     int r1, c1, r2, c2;
//     cout << "Enter rows and columns of first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns of second matrix: ";
//     cin >> r2 >> c2;
//     int A[10][10], B[10][10], C[10][10];
//     cout << "Enter elements of first matrix:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             cin >> A[i][j];
//         }
//     }
//     cout << "Enter elements of second matrix:" << endl;
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             cin >> B[i][j];
//         }
//     }
//     multiplyMatrices(A, B, C, r1, c1, r2, c2);
//     cout << "Product of matrices:" << endl;
//     displayMatrix(C, r1, c2);
//     return 0;
// }

//Problem7
// #include <iostream>
// using namespace std;
// const int N = 3; // Define matrix size
// void rotateMatrix90(int matrix[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = i; j < N; j++)
//             swap(matrix[i][j], matrix[j][i]);
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0, k = N - 1; j < k; j++, k--)
//             swap(matrix[i][j], matrix[i][k]);
//     }
// }
// void printMatrix(int matrix[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++)
//             cout << matrix[i][j] << " ";
//         cout << endl;
//     }
// }
// int main() {
//     int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     printMatrix(matrix);
//     rotateMatrix90(matrix);
//     cout << "\nRotated Matrix:" << endl;
//     printMatrix(matrix);
//     return 0;
// }


