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
   // int l;
    int *maxL;
    for(int j=0; j<10; j++)
    {
        //if(*maxnum<*(p+j))
        if(*(p+j) > *maxnum)
        {
            *maxnum = *(p+j);
            *maxL = j;
        }else
        {
            *maxnum = *maxnum;
        }
    }
    cout<<endl;
    cout<<"Max: "<<*maxnum<<"at " <<*maxL;
    cout<<endl;
    
    // for(int g=0; g<10; g++)
    // {
    //     if(*maxnum< *(p+g))
    //     {
    //         *maxnum = *(p+g);
    //         *maxL = g;

    //     }
         
    // }
    // cout<<"Location"<<*maxL;
 return 0;

}