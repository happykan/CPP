//Keyboard Input BMI Calculator 15-28 pts Happy Kan
#include <iostream>
using namespace std;

int main ()
{
    float height, weight, BMI;
    std::cout <<"Your height in m: \n";
    cin >> height;

    std::cout <<"Your weight in kg: \n";
    cin >> weight;

    BMI = (weight)/(height*height);

    std::cout <<"Your BMI is " << BMI <<endl;
    return 0;

}