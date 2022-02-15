//Challenge #2 -3
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int start, end;
    unsigned long long result = 0, modulo=10000000000;
    cout <<"Where to start?: ";
    cin >> start;
    cout <<"\n";
    cout <<"Where to end?: ";
    cin >> end;
    for (int i=start; i<=end; i++)
    { 
        unsigned long long temp = i;
        for (int j=start; j<i; j++)
        {
            temp=temp*i;
            temp=temp%modulo;
        }
        result = result+temp;
        result = result%modulo;
    }
    cout <<result;
    return 0;
}