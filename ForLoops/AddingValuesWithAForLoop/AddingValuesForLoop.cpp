//For Loops Adding Values with a For Loop 30 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int ans;
    int sum = 0;
    cout <<"Number: " ;
    cin >> ans;
    cout <<"\n";
    for (int n=1; n<=ans; n=n+1)
    {
        cout <<n <<" ";
        sum = n+sum;
    }
    cout <<"\n";
    cout <<"The sum is " <<sum <<endl;
    return 0;


}