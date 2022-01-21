//Random Numbers A Number-Guessing Game 20 pts Happy Kan
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main ()
{
    int guess;
    srand(time(NULL));
    cout <<"I'm thinking of a number from 1 to 10" <<endl;
    cout <<"Your guess: " <<endl;
    cin >> guess;
    int num=rand()%10+1;
    cout <<"\n";
    if (num=guess)
    {
        cout <<"That's right! My secret number was " << num <<endl;
    }
    else
    {
        cout <<"Sorry, but I was really thinking of " << num <<endl;
    }
    return 0;
}