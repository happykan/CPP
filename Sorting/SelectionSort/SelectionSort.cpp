//Sorting Selection Sort - code provided 130 pts
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
    int minIndex, tmp;
    for (int i=0; i<size; i++)
    {
        arr[i] = rand()%100+1;
    }
    cout <<"Array before sorting: ";
    for (int i=0; i<size; i++)
    {
        cout << arr[i]<<" ";
    }
    for (int m=0; m<size-1; m++)
    {
        int minIndex = m;
        for (int n=m+1; n<size; n++)
        {
            if (arr[n] < arr[minIndex])
            {
                minIndex = n;
            }
        }
        int tmp = arr[minIndex];
        arr[minIndex] = arr[m];
        arr[m] = tmp;
    }
    cout <<endl;
    cout <<"Array after sorting: ";
    for (int m=0; m<size; m++)
    {
        cout <<arr[m]<<" ";
    }
    cout <<endl;

    return 0;

}