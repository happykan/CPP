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
    myFunction(3, 5, 1000);
    cout <<endl;
    return 0;
}