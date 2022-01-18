//Keyboard Input BMI Calculator 15-28 pts Happy Kan
#include <iostream>
using namespace std;

int main ()
{
    float height, weight, BMI, height_2;
    //std::cout <<"Your height in inches: \n";
    //cin >> height;

    //std::cout <<"Your weight in pounds: \n";
    //cin >> weight;

    //BMI = (weight*0.453592)/(height*0.0254*height*0.0254);

    //std::cout <<"Your BMI is " << BMI <<endl;
    //return 0;
    std::cout <<"Your height (feet only): \n";
    cin >> height;

    std::cout <<"Your weight (inches): \n";
    cin >> height_2;

    std::cout <<"Your weight in pounds: \n";
    cin >> weight;
    BMI = (weight*0.453592)/((height_2*12*0.0254)+(height*0.0254)*(height_2*12*0.0254)+(height*0.0254));

    std::cout <<"Your BMI is " << BMI <<endl;
    return 0;
}