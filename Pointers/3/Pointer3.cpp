//Pointer #3
#include <iostream>
using namespace std;
const int M = 3; //declare a constant M
const int N = 3; //declare a constant N
void printArr(int *array, int sizeArr){ 
    for(int i=0;i<sizeArr;i++) //from 0 to the size of the array
    cout<<*(array+i)<<endl; //find the arr[i]
}
void print2D(int arr[M][N]){ 
    for (int i = 0; i < M; i++){ //use for loop to find the value of M
      for (int j = 0; j < N; j++){ //use for loop to find the value of N
        cout<<arr[i][j]<<" "; //print out the array
        }cout<<endl;
    }
}
void print2DP(int *arr, int r, int c){ //
    for (int i = 0; i < r; i++){ //use for loop to run through row
      for (int j = 0; j < c; j++){ //use for loop to run thorugh column
        cout<<  *(arr+i+j)  <<" "; //print out the 2D array (different from *(arr+i)+j)
      }cout<<endl;
    }
}
int main()
{
    int arr[6]={3,6,2,5,3,1};
    printArr(&arr[0],6); //run the function that print out 3 6 2 5 3 1 
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //declare the array
    print2D(arr2); //run the function same as normal 2D array
    cout<<endl;
    print2DP(&arr2[0][0],3,3); //run the function rearaging the array
    return 0;
}