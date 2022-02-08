//Fnctions Area Calculator 110 pts Happy Kan
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void circle(int x)
{
    float a = M_PI*x*x;
}
void rectangle(int x, int y)
{
    float a = x*y;
}
void square(int x)
{
    float a = x*x;
}
void triangle(int x, int y)
{
    float a = x*y/2;
}
int main ()
{
    cout <<"Shape Area Calculator."<<endl;
    cout <<"\n";
    cout <<"-=-=-=-=-=-=-=-=-=-=-=-=--=-=--=-=-="<<endl;
    cout <<"\n";
    int choice;
    do 
    {
        cout <<"1) Triangle"<<endl;
        cout <<"2) Rectangle"<<endl;
        cout <<"3) Square"<<endl;
        cout <<"4) Circle"<<endl;
        cout <<"5) Quit"<<endl;
        cout <<"Which shape: ";
        cin >>choice;
        cout <<"\n";
        if (choice==1)
        {
            cout <<"Base: ";
            cin >> int x;
            cout <<"Height: ";
            cin >> int y;
            cout <<"\n";
            cout <<"The area is " <<triangle(x,y) <<"."<<endl;
            cout <<"\n";
            cout <<"-=-=-=-=-=-=-=-=-=-=-=-=--=-=--=-=-="<<endl;
            cout <<"\n";
        }
        else if (choice==2)
        {
            cout <<"Length: ";
            cin >> int x;
            cout<<"Width: ";
            cin >> int y;
            cout <<"\n";
            cout <<"The area is " <<rectangle(x,y)<<"."<,endl;
            cout <<"\n";
            cout <<"-=-=-=-=-=-=-=-=-=-=-=-=--=-=--=-=-="<<endl;
            cout <<"\n";
        }
        else if (choice==3)
        {
            cout <<"Side length: ";
            cin >> int x;
            cout <<"\n";
            cout <<"The area is " <<square(x)<<"."<<endl;
            cout <<"\n";
            cout <<"-=-=-=-=-=-=-=-=-=-=-=-=--=-=--=-=-="<<endl;
            cout <<"\n";  
        }
        else if (choice==4)
        {
            cout <<"Radius: ";
            cin >> int x;
            cout <<"\n";
            cout <<"The area is " <<circle(x)<<"."<<endl;
            cout <<"\n";
            cout <<"-=-=-=-=-=-=-=-=-=-=-=-=--=-=--=-=-="<<endl;
            cout <<"\n";
        }
    }
    while (choice!=5);
    cout <<"Goodbye."<<endl;
    return 0;
}


