//Arrays Locating the Largest Value in an Array 110 pts Happy Kan
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main ()
{
    int arr[10];
    srand(time(NULL));
    cout<<"Find the largest value in an array: ";
    int *p;
    for(int i=0; i<10; i++)
    {
        int randnum = rand()%100+1;
        arr[i] = randnum;
        p = &arr[0];
        cout<<*(p+i)<<" ";
    }
    int *maxnum = p;
    for(int j=0; j<10; j++)
    {
        if(*maxnum<*(p+j))
        {
            *maxnum = *(p+j);
        }else
        {
            *maxnum = *maxnum;
        }
    }
    cout<<endl;
    cout<<"Max: "<<*maxnum;
    cout<<endl;
    for(int g=0; g<10; g++)
    {
        if(arr[g] == *maxnum)
        {
            cout<<*maxnum<<" is in "<<g<<endl;
        }
    }
    return 0;

}