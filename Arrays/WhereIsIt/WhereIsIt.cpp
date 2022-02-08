//Arrays Where Is It? 90 pts Happy Kan
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main ()
{
    int num;
    int slot=0;
    srand(time(NULL));
    int arr[10];
    cout <<"Array: ";
    for (int i=0; i<10; i++)
    {
        int randomnumber = rand()%50+1;
        arr[i] = randomnumber;
        cout <<arr[i]<<" ";
    }
    cout <<"Value to find: "<<endl;
    cin >> num;
    cout <<"\n";
    for (int i=0; i<10; i++)
    {
        if (arr[i] == num)
        {
            cout<<num<<" is in " <<i<<endl;

        }
    }
    return 0;

}