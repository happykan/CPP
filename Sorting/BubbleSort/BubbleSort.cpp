//Sorting Bubble Sort 130 pts
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i<size; i++)
    {
        arr[i] = rand()%100+1;
    }
    cout <<"Array before sorting: ";
    for (int i=0; i<size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout <<endl;

    for(int m=0; m<size; m++)
    {
        for(int n=0; n<size; n++)
        {
            if(arr[n]>arr[n+1])
            {
                int temp = arr[n];
                arr[n] = arr[n+1];
                arr[n+1] = temp;
            }
        }
    }
    cout <<endl;
    cout <<"Array after sorting: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}