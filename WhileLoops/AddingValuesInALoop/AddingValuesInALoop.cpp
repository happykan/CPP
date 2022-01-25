//While Loops Adding Values in a Loop 30 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    cout <<"I will add up the numbers you give me.\n";
    int num = 0;
    int sum = 0;
    cout <<"Number: " <<endl;
    cin >> num;
    sum = num+sum;
    while (num!=0)
    {
        cout <<"The total number so far is " <<sum <<endl;
        cout <<"Number: " <<endl;
        cin >> num;
        sum = num+sum;
    }
    cout <<"\n";
    cout <<"The total is " <<sum <<endl;
    return 0;
}