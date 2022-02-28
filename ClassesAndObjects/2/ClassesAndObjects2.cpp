//Classes and Objects #2
#include <iostream>
#include <list>
#include <cmath>
using namespace std;
class Triangle
{
    public:
    int x1, y1, x2, y2, x3, y3;
    double side1, side2, side3, area;

    Triangle (int x_1, int y_1, int x_2, int y_2, int x_3, int y_3)
    {
        x1=x_1;
        y1=y_1;
        x2=x_2;
        y2=y_2;
        x3=x_3;
        y3=y_3;
        side1 = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        side2 = sqrt(((x3-x3)*(x3-x2))+((y3-y2)*(y3-y2)));
        side3 = sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
        area = sqrt(((side1+side2+side3)/2)*(((side1+side2+side3)/2)-side1)*(((side1+side2+side3)/2)-side2)*(((side1+side2+side3)/2)-side3));
        //area = sqrt((sqrt((side1+side2+side3)/2))((sqrt((side1+side2+side3)/2))-side1)((sqrt((side1+side2+side3)/2))-side2)((sqrt((side1+side2+side3)/2))-side3));
    }
    void GetInfo()
    {
        cout<<"Coordinates: ";
        cout<<"("<<x1<<","<<y1<<")"<<endl;
        cout<<"("<<x2<<","<<y2<<")"<<endl;
        cout<<"("<<x3<<","<<y3<<")"<<endl;
        cout<<"3 side length: ";
        cout<<side1<<endl;
        cout<<side2<<endl;
        cout<<side3<<endl;
        cout<<"area: "<<area<<endl;
    }
    
};
int main()
{
    Triangle Trig_1(0,0,3,0,3,4);
    Trig_1.GetInfo();
    return 0;
}