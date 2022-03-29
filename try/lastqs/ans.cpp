#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
//function to check if a given number is prime
bool isPrime(int n){
      //since 0 and 1 is not prime return false.
      if(n==1||n==0) return false;
   
      //Run a loop from 2 to n-1
      for(int i=2; i<n; i++){
        // if the number is divisible by i, then n is not a prime number.
        if(n%i==0) return false;
      }
      //otherwise, n is prime number.
      return true;
}
int countprime(int start, int n)
{
    vector<int> primevector;

    for(int i=start; i<= n; i++)
    {
        if(isPrime(i)==1)
        {
            primevector.push_back(i);
        }
    }
    int num = 0, ans=0, length=primevector.size(), count = 0, allcount = 0;
        for(int j=0; j<=primevector.size(); j++)
        {
            for(int i=j; i<primevector.size(); i++)
            {
                num += primevector.at(i);
                count++;
                if(isPrime(num)==1 && num <=n && count >= allcount)
                {
                    ans = num;
                    allcount = count;
                }
            }
            count = 0;
            num = 0;

        }
        
    return ans;
}

int main()
{
    int start, N;
    cout<<"min: ";
    cin >>start;
    cout<<"Max: ";
    cin >> N;
    cout<<countprime(start, N);
 
    return 0;
}
