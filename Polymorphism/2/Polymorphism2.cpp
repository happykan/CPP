//Polymorphism 2
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
    Quadrilateral shape1(5);
    Quadrilateral shape2(5,4);
    Quadrilateral shape3(2,6,4);

    cout<<shape1.getType()<<": "<<shape1.getArea()<<endl;
    cout<<shape2.getType()<<": "<<shape2.getArea()<<endl;
    cout<<shape3.getType()<<": "<<shape3.getArea()<<endl;


    return 0;
}