//Challenge #1-5
#include <iostream>
using namespace std;
void myFunction (int a, int b, int l, int n)
{
    int sum = 0;
    for (int i=l; i<n; i++)
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
    int a, b, n, l;
    cout <<"1st multiple: ";
    cin >>a;
    cout <<endl;
    cout <<"2nd multiple: ";
    cin >>b;
    cout <<endl;
    cout <<"limit: ";
    cin >>n;
    cout <<endl;
    cout <<"minimum: ";
    cin >>l;
    cout <<endl;
    myFunction(a, b, l, n);
    cout <<endl;
    return 0;
}