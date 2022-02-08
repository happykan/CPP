//Sorting Sorting an Array - code provided 100 pts Happy Kan
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main ()
{
    srand(time(NULL));
    int arr[10];
    int random=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout <<"Array before sorting: " <<endl;
    for (int i=0; i<size; i++)
    {
        random = rand()%100+1;
        arr[i] = random;
        cout << arr[i]<<" ";
    }
    for (int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }

        }
    }
    cout <<"\n";
    cout <<"After: ";
    for(int i=0; i<size; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}