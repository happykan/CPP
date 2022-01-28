//Nested Loops Basic Nested Loops 50 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    for (int a=0; a<=5; a++)
    {
        for (int b=0; b<=5; b++)
        {
            cout <<"("<<a<<","<<b<<")";
        }
        cout <<endl;
    }
    return 0;
}