//If Statements compareTo() Challenge 35 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string a = "Computer";
    string b = "Computer";
    string c = "ok";
    string d = "ok";
    string e = "red";
    string f = "blue";
    string g = "pink";
    string h = "black";

    cout <<"Comparing \"Computer\" and \"Computer\" produces ";
    int result = a.compare(b);
    cout <<result <<endl;

    cout <<"Comparing \"ok\" and \"red\" produces ";
    result = c.compare(d);
    cout <<result <<endl;

    cout <<"Comparing \"ok\" and \"red\" produces ";
    result = d.compare(c);
    cout <<result <<endl;

    cout <<"Comparing \"ok\" and \"black\" produces ";
    result = d.compare(h);
    cout <<result <<endl;

    cout <<"Comparing \"blue\" and \"black\" produces ";
    result = f.compare(h);
    cout <<result <<endl;
    
    cout <<"Comparing \"blue\" and \"pink\" produces ";
    result = f.compare(g);
    cout <<result <<endl;

    cout <<"Comparing \"red\" and \"pink\" produces ";
    result = e.compare(g);
    cout <<result <<endl;
    
    cout <<"Comparing\"pink\" and \"ok\" produces ";
    result = g.compare(d);
    cout <<result <<endl;

    cout <<"Comparing \"Computer\" and \"ok\" produces ";
    result = a.compare(c);
    cout <<result <<endl;

    cout <<"Comparing \"pink\" and \"black\" produces ";
    result = g.compare(h);
    cout <<result <<endl;

    cout <<"Comparing \"ok\" and \"blue\" produces ";
    result = c.compare(f);
    cout <<result <<endl;

    cout <<"comparing \"black\" and \"Computer\" produces ";
    result = h.compare(a);
    cout <<result <<endl;

    return 0;

}