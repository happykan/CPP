//Challenge #2-0
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long sum = 0, a;
    for (int i=1; i<=10; i++)
    {
        a = pow(i,i);
        sum += a;
    }
    cout << sum;
    return 0;
}