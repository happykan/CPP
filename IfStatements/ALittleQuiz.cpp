//If Statements A Little Quiz 40 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ans_1, ans_2, ans_3, ans_4;
    int correct=0;
    cout <<"Are you ready for a quiz? \n";
    cin >> ans_1;
    if (ans_1=="Y")
    {
        cout <<"Okay, here it comes!\n";
        cout <<"\n";
        cout <<"Q1) What is the capital of ALaska?\n";
        cout <<"    1) Melbourne\n";
        cout <<"    2) Anchorage\n";
        cout <<"    3) Juneau\n";
        cout <<"\n";
        cout <<">";
        cin >>  ans_2;
        if (ans_2 == "3")
        {
            cout <<"\n";
            cout <<"That's right!\n";
            correct++;
            cout <<"\n";
        }
        else 
        {
            cout <<"\n";
            cout <<"Sorry, the correct answer is Juneau\n";
            cout <<"\n";
        }
        cout <<"Q2) Can you store the value \"cat\" in a variable of type int?\n";
        cout <<"    1) yes\n";
        cout <<"    2) no\n";
        cout <<"\n";
        cout <<">";
        cin >> ans_3;
        if (ans_3 == "2")
        {
            cout <<"\n";
            cout <<"Correct\n";
            correct++;
            cout <<"\n";
        }
        else
        {
            cout <<"\n";
            cout <<"Sorry, \"cat\" is a string. ints can only store numbers.\n";
            cout <<"\n";
        }
        cout <<"Q3) What is the result of 9+6/3?";
        cout <<"    1) 5\n";
        cout <<"    2) 11\n";
        cout <<"    3) 15/3\n";
        cout <<"\n";
        cout <<">";
        cin >> ans_4;
        if (ans_4 == "2")
        {
            cout <<"\n";
            cout <<"That's correct!\n";
            correct++;
            cout <<"\n";
        }
        else
        {
            cout <<"\n";
            cout <<"wrong!\n";
            cout <<"\n";
        }
        cout <<"\n";
    }
    else
    {
        cout <<"no game!\n";
    }
    cout <<"Overall, you got " <<correct <<" out of 3 correct.\n";
    cout <<"Thanks for playing!";
    return 0;
}