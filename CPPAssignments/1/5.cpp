#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main()
// {
//     int rows, cols;
//     cout << "Enter the number of rows \n";
//     cin >> rows;
//     cout << "Enter the number of cols\n";
//     cin >> cols;
//     int matrix[rows][cols];
//     cout << "Enter the elements of the matrix\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     };
//     int top = 0;
//     int left = 0;
//     int bottom = rows - 1;
//     int right = cols - 1;
//     cout << "Spiral order" << endl;
//     while (top <= bottom && left <= right)
//     {
//         for (int i = left; i <= right; i++)
//         {
//             cout << matrix[top][i] << " ";
//         };
//         top++;
//         for (int i = top; i <= bottom; i++)
//         {
//             cout << matrix[i][right] << " ";
//         };
//         right--;
//         if (top <= bottom)
//         {
//             for (int i = right; i >= left; i--)
//             {
//                 cout << matrix[bottom][i] << " ";
//             };
//             bottom--;
//         };
//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//             {
//                 cout << matrix[i][left] << " ";
//             };
//             left++;
//         }
//     };
// };





// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};
//     for(int i=0; i<3; i++){
//         if(i%2 !=0){
//             for(int j=3-1; j>=0; j--){
//                 cout << arr[j][i]<<" ";
//             };
//         } else{
//             for(int j=0; j<3; j++){
//                 cout << arr[j][i]<<" ";
//             };
//         };
//     };
// }




// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for(int sum =0; sum <=(3+3-2); sum++){
//         for(int i =0; i<=sum; i++){
//             int j = sum-i;
//             if(i < 3 && j< 3){
//                 cout << arr[i][j]<< " ";
//             };
//         };
//         cout << endl;
//     };
//     return 0;
// }



// int main(){
//     int rows, cols;
//     cout << "Enter the rows : ";cin>>rows;
//     cout << "Enter the cols : ";cin>>cols;
//     int arr[rows][cols];
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> arr[i][j];
//         };
//     };
//     int top = 0; int left =0;
//     int bottom = rows-1;
//     int right = cols - 1;
//     while(top<=bottom && left<=right){
//         for(int i=left; i<=right;i++){
//             cout << arr[top][i]<<" "; 
//         };
//         top++;
//         for(int i = top; i<=bottom; i++){
//             cout << arr[i][right]<< " ";
//         };
//         right--;
//         for(int i=right; i>=left; i--){
//             cout << arr[bottom][i]<< " ";
//         };
//         bottom--;
//         for(int i=bottom;i>=top; i--){
//             cout << arr[i][left]<<" ";
//         };
//         break;
//     }
//     return 0;
// };





// int main(){
//     int rows, cols;
//     cout << "Enter the rows : "; cin >> rows;
//     cout << "Enter the cols : "; cin >> cols;
//     vector<vector<int>>matrix(rows, vector<int>(cols));
//     for(int i=0;i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         };
//     };
//     for(int i=0;i<rows; i++){
//         for(int j=i+1; j<cols; j++){
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         };
//     };
//     for(int i=0; i<rows; i++){
//         int left =0;
//         int right = cols -1;
//         while(left<right){
//             int temp = matrix[i][left];
//             matrix[i][left] = matrix[i][right];
//             matrix[i][right] = temp;
//             left++;
//             right--;
//         }
//     }
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout << matrix[i][j] << " ";
//         };
//         cout << endl;
//     };
//     return 0; 
// };



// int main(){
//     int rows,cols;
//     cout << "Enter the rows : "; cin >> rows;
//     cout << "Enter the cols : "; cin >> cols;
//     vector<vector<int>> matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     bool found = false;
//     for(int i=0; i<rows; i++){
//         int mininrow = matrix[i][0];
//         int colindex =0;
//         for(int j=1; j<cols; j++){
//             if(matrix[i][j] < mininrow){
//                 mininrow = matrix[i][j];
//                 colindex = j;
//             };
//         };
//         bool issaddlepoint = true;
//         for(int k=0; k<rows; k++){
//             if(matrix[k][colindex] > mininrow){
//                 issaddlepoint = false;
//                 break;
//             };
//         };
//         if(issaddlepoint){
//             cout << "Saddle Point: "<< mininrow<<endl;
//             found = true;
//         }
//     };
//     if(!found){
//         cout << "No saddle point";
//     }
//     return 0;
// }



// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";cin>>rows;
//     cout << "Enter the number of cols: ";cin>>cols;
//     vector<vector<int>> matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         };
//     };
//     int maxsumrow =0;
//     int maxsum = 0;
//     for(int i=0; i<rows; i++){
//         int sum =0;
//         for(int j=0; j<cols; j++){
//             sum += matrix[i][j];
//         };
//         if(sum > maxsum){
//             maxsum = sum;
//             maxsumrow = i;
//         };
//     };
//     cout << "The max sum row is : "<< maxsumrow+1<<endl;
//     return 0;
// };






// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";cin>>rows;
//     cout << "Enter the number of cols: ";cin>>cols;
//     vector<vector<int>> matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         };
//     };
//     for(int i=0; i<rows;i++){
//         for(int j=i+1; j<cols; j++){
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         };
//     };
//     for(int i=0; i<rows;i++){
//         for(int j=0; j<cols; j++){
//             cout << matrix[i][j]<<" ";
//         };
//         cout << endl;
//     }
//     return 0;
// }



// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";cin>>rows;
//     cout << "Enter the number of cols: ";cin>>cols;
//     vector<vector<int>> matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin>>matrix[i][j];
//         };
//     };
//     bool issymmetrix = true;
//     for(int i=0;i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(matrix[i][j] != matrix[j][i]){
//                 issymmetrix = false;
//             }
//         };
//     };
//     if(issymmetrix){
//         cout << "The matrix is symmertric"<<endl;
//     } else{
//         cout << "The matrix is not symmetric"<<endl;
//     }
// };




// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";cin>>rows;
//     cout << "Enter the number of cols: ";cin>>cols;
//     vector<vector<int>> matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         };
//     };
//     for(int i=0; i<rows;i++){
//         if(i%2 != 0){
//             for(int j=cols-1;j>=0; j--){
//                 cout << matrix[i][j]<<" ";
//             }
//         } else{
//             for(int j=0; j<cols; j++){
//                 cout << matrix[i][j]<< " ";
//             }
//         };
//     };
//     return 0;
// };



// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";
//     cin>>rows;
//     cout << "Enter the number of cols: ";
//     cin>>cols;
//     vector<vector<int>>matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin>>matrix[i][j];
//         };
//     };
//     bool found = false;
//     for(int i=0; i<rows && !found; i++){
//         for(int j=0; j<cols && !found; j++){
//             bool isrepeat = false;
//             for(int k=0; k<rows; k++){
//                 for(int l=0; l<cols; l++){
//                     if(i==k && j==l)continue;
//                     if(matrix[i][j] == matrix[k][l]){
//                         isrepeat = true;
//                         break;
//                     };
//                 };
//                 if (isrepeat) break;
//             };
//             if(!isrepeat){
//                 cout << "First non-repeating element: "<< matrix[i][j]<<endl;
//                 found = true;
//             }
//         }
//     }
//     if(!found){
//         cout << "No non-repeating element found."<<endl;
//     };
//     return 0;
// };


// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";
//     cin>>rows;
//     cout << "Enter the number of cols: ";
//     cin>>cols;
//     vector<vector<int>>Matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> Matrix[i][j];
//         }
//     }
//     for(int i=0; i<rows; i++){
//         int maxel=0;
//         for(int j=0; j<cols; j++){
//             if(Matrix[i][j] > maxel){
//                 maxel = Matrix[i][j];
//             };
//         };
//         cout << "Max in row "<<i<<": "<<maxel<<endl;
//     }
// };




// int main(){
//     int rows, cols;
//     cout << "Enter the number of rows: ";
//     cin>>rows;
//     cout << "Enter the number of cols: ";
//     cin>>cols;  
//     vector<vector<int>> Matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> Matrix[i][j];
//         };
//     };
//     for(int i=0; i<rows; i++){
//         int sum =0;
//         for(int j=0; j<cols; j++){
//             sum+= Matrix[j][i];
//         }
//         cout << "Sum of column "<<i<<": "<<sum<<endl;
//     }
//     return 0;
// };



// int main(){
//     int rows,cols;
//     cout << "Enter number of rows: ";
//     cin>>rows;
//     cout << "Enter number of column: ";
//     cin>>cols;
//     vector<vector<int>>Matrix(rows, vector<int>(cols));
//     for(int i=0; i<rows;i++){
//         for(int j=0; j<cols; j++){
//             cin>>Matrix[i][j];
//         };
//     };
//     for(int i=0; i<rows/2; i++){
//         for(int j=0; j<cols; j++){
//             int temp = Matrix[i][j];
//             Matrix[i][j] = Matrix[rows-1-i][cols-1-j];
//             Matrix[rows-1-i][cols-1-j] = temp;
//         };
//     };
//     if(rows%2 == 1){
//         int i=rows/2;
//         for(int j=0; j<cols/2; j++){
//             int temp = Matrix[i][j];
//             Matrix[i][j] = Matrix[i][cols-1-j];
//             Matrix[i][cols-1-j] = temp;
//         };
//     };
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout << Matrix[i][j]<<" ";
//         };
//         cout << endl;
//     };
//     return 0;
// }