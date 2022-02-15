//Challenge #1-2
#include <iostream>
using namespace std;
void myFunction (int a, int b, int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        if (i % a==0 || i%b ==0)
        {
            sum = sum+i;
        }
        
    }
    cout <<sum;

}
int main ()
{
    int a, b, n;
    cout <<"1st multiple: ";
    cin >>a;
    cout <<endl;
    cout <<"2nd multiple: ";
    cin >>b;
    cout <<endl;
    cout <<"limit: ";
    cin >>n;
    cout <<endl;
    myFunction(a, b, n);
    cout <<endl;
    return 0;
}