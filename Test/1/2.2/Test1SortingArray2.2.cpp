//Test 1: Sort 2D Array 2-2
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int m, n;
    cout<<"Type in the row: ";
    cin>>m;
    cout<<endl;
    cout<<"Type in the column: ";
    cin>>n;
    cout<<endl;

    char arr[m][n];
    cout<<"Array before sorting: "<<endl;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int r = rand()%25+'a';
            char ch = (char)r;
            arr[i][j] = ch;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"Array after sorting by row: ";
    for(int i=0; i<m*n; i++)
    {
        for(int l=0; l<m; l++)
        {
            for(int p=0; p<n-1; p++)
            {
                if(arr[l][p]>arr[l][p+1])
                {
                    int temp = arr[l][p];
                    arr[l][p] = arr[l][p+1];
                    arr[l][p+1] = temp;
                }
            }
        }
    }
    cout <<"\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //column
    for(int o=0; o<n; o++)
    {
        for(int r=0; r<m-1; r++)
        {
            if(o%2==0)
            {
                if(arr[r][o]>arr[r+1][o])
                {
                    int temp=arr[r][o];
                    arr[r][o]=arr[r+1][o];
                    arr[r+1][o]=temp;
                }
            }
            else
            {
                if(arr[r][o]<arr[r+1][o])
                {
                    int temp=arr[r][o];
                    arr[r][o]= arr[r+1][o];
                    arr[r+1][o]=temp;
                }
            }
        }
    }
    cout<<"Array after sorting by column: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


