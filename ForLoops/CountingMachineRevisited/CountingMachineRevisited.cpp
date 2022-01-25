//For Loops Counting Machine Revisited 25 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ans_1, ans_2, ans_3;
    cout <<"Count from: " <<endl;
    cin >> ans_1;
    cout <<"Count to: " <<endl;
    cin >>ans_2;
    cout <<"Count by : " <<endl;
    cin >> ans_3;
    cout <<"\n";
    for (int n=ans_1; n<=ans_2; n=n+ans_3)
    {
        cout <<n <<" ";
    }
    return 0;

}