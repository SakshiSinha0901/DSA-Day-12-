// // FINDING MINIMUM VALUE IN 2D ARRAY
// #include <iostream>
// #include <climits>
// using namespace std;

// int FInd_Minimum_In_2D_Array(int arr[][4], int rowSize, int colSize){
//     int minValue = INT_MAX;
//     for (int i = 0; i<rowSize; i++){
//         for (int j=0; j<colSize ; j++){
//             minValue = min(arr[i][j], minValue);
//         }
//     }
//     return minValue;
// }

// int main(){
//     int arr[3][4]= {
//         {10,11,12,13},
//         {20,21,22,23},
//         {31,32,44,55}
//     };
//     int rowSize = 3;
//     int colSize = 4;

//     int ans = FInd_Minimum_In_2D_Array(arr,rowSize,colSize);
//     cout<<ans<<endl;
// }

//FINDING MAXIMUM NUMBER IN A 2D ARRAY
// #include <iostream>
// #include <climits>
// using namespace std;

// int FInd_MAXIMUM_In_2D_Array(int arr[][4], int rowSize, int colSize){
//     int maxValue = INT_MIN;
//     for (int i = 0; i<rowSize; i++){
//         for (int j=0; j<colSize ; j++){
//             maxValue = max(arr[i][j], maxValue);
//         }
//     }
//     return maxValue;
// }

// int main(){
//     int arr[3][4]= {
//         {10,11,12,13},
//         {20,21,22,23},
//         {31,32,44,55}
//     };
//     int rowSize = 3;
//     int colSize = 4;

//     int ans = FInd_MAXIMUM_In_2D_Array(arr,rowSize,colSize);
//     cout<<ans<<endl;
// }
// PRINTING DIFFERENT SUMS
// 1. Row wise sum
// #include <iostream>
// using namespace std;

// void printRowSum (int arr[][4], int rowSize ,int colSize){
//     for(int i=0; i<rowSize; i++){
//         int sum = 0;
//         for(int j=0; j<colSize; j++){
//             sum = sum + arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][4] = {
//         {10,10,10,10},
//         {20,20,20,20},
//         {30,30,30,30}
//     };
//     int rowSize = 3;
//     int colSize = 4;
//     printRowSum(arr,rowSize,colSize);
// }

// 2. Column wise sum
// #include <iostream>
// using namespace std;

// void printColumnSum (int arr[][4], int rowSize ,int colSize){
//     for(int j=0; j<colSize; j++){
//         int sum = 0;
//         for(int i=0; i<rowSize; i++){
//             sum = sum + arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][4] = {
//         {10,10,10,10},
//         {20,20,20,20},
//         {30,30,30,30}
//     };
//     int rowSize = 3;
//     int colSize = 4;
//     printColumnSum(arr,rowSize,colSize);
// }

// 3. Diagonal wise sum (in square matrix)
// #include <iostream>
// using namespace std;

// void printDiagonalSum (int arr[][3], int rowSize ,int colSize){
//     int sum = 0;
//     for(int i=0; i<rowSize; i++){
// //         for(int j=0; j<colSize; j++){
// //             if ( i==j){
// //                 sum = sum + arr[i][j];
// //             }
// //         }
        
// //     }
// //     cout<<"Sum is :"<<sum<<endl;

// //OR
//     int sum= 0;
//     for( int i = 0; i<rowSize;i++ ){
//         sum = sum + arr[i][i];
//     }
//     cout<<"Sum is :"<<sum<<endl;
// }
// int main(){
//     int arr[3][3] = {
//         {10,10,10},
//         {20,20,20},
//         {30,30,30}
//     };
//     int rowSize = 3;
//     int colSize = 3;
//     printDiagonalSum(arr,rowSize,colSize);
// }
//

// TRANSPOSE OF A MATRIX
// #include <iostream>
// using namespace std;

// void TransposeMatrix(int arr[][3], int rowSize, int colSize) {
//     int ans[100][100] = {0};

//     for (int i = 0; i < rowSize; i++) {
//         for (int j = 0; j < colSize; j++) {
//             ans[j][i] = arr[i][j]; 
//         }
//     }

//     for (int i = 0; i < colSize; i++) { // Swap rowSize and colSize in the loop
//         for (int j = 0; j < rowSize; j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[3][3] = {
//         {10, 11, 12},
//         {20, 21, 22},
//         {30, 31, 32}
//     };
//     int rowSize = 3;
//     int colSize = 3;

//     TransposeMatrix(arr, rowSize, colSize);
//     return 0;
// }

//Transposing in same array
#include <iostream>
using namespace std;

void TransposeMatrix(int arr[][3], int rowSize, int colSize) {

    for (int i = 0; i < rowSize; i++) {
        for (int j = i; j < colSize; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout<<"Printing the transpose"<<endl;
    for (int i = 0; i < rowSize; i++) { 
        for (int j = 0; j < colSize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int arr[3][3] = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32}
    };
    int rowSize = 3;
    int colSize = 3;

    TransposeMatrix(arr, rowSize, colSize);
    return 0;
}