//Polymorphism 3
#include <iostream>
using namespace std;
class Quadrilateral{
    private:
        double Area;
        string Type;
    public:
        Quadrilateral(){}
        Quadrilateral(int x){
            Area = x*x;
            Type = "Square";
        }
        Quadrilateral(int w, int h){
            Area = w*h;
            Type = "Rectangle";
        }
        Quadrilateral(int b1, int b2, int h){
            Area = ((b1+b2)*h)/2;
            Type = "trapezoid";
        }
        int changeShape(int x)
        {
            Area = x*x;
            return Area;
        }
        int changeShape(int w, int h)
        {
            Area = w*h;
            return Area;
        }
        int changeShape(int b1, int b2, int h)
        {
            Area= ((b1+b2)*h)/2;
            return Area;
        }
        double getArea()
        {
            return Area;
        }
        string getType()
        {
            return Type;
        }
};
int main()
{
    Quadrilateral shape[3] = {Quadrilateral(6), Quadrilateral(6,5), Quadrilateral(3,6,5)};
    Quadrilateral Square[3];
    for (int i=0; i<3; i++)
    {
        Square[i] = Quadrilateral(i+5);
    }
    Square[1].changeShape(6,6);
    //cout<<""<<shape[0].getType()<<endl;
    cout<<"The area of "<<shape[0].getType()<<"is "<<shape[0].getArea()<<endl;
    cout<<"The area of "<<shape[1].getType()<<"is "<<shape[1].getArea()<<"."<<endl;
    cout<<"The area of "<<shape[2].getType()<<"is "<<shape[2].getArea()<<"."<<endl;
    cout<<endl;
    cout<<"The area of "<<Square[0].getType()<<"is "<<Square[0].getArea()<<"."<<endl;
    cout<<"The area of "<<Square[1].getType()<<"is "<<Square[1].getArea()<<". "<<endl;
    cout<<"The area of "<<Square[2].getType()<<"is "<<Square[2].getArea()<<"."<<endl;
    cout<<endl;
    cout<<"The total area is "<<shape[0].getArea()+shape[1].getArea()+shape[2].getArea()<<"."<<endl;


    return 0;
    
}