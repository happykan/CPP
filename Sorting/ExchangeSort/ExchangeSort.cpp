//Sorting Exchange Sort - code provided 120 pts Happy Kan
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
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
    
}