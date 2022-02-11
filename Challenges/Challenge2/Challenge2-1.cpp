//Challenge #2-1
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long sum = 0, a;
    for (int i=1; i<=1000; i++)
    {
        a = pow(i,i);
        sum += a;
    }
    cout << sum;
    return 0;
}