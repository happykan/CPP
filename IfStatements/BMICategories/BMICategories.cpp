//If Statements BMI Categories 35-45 pts Happy Kan
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    float height, weight, BMI;
    cout <<"Your height in inches: " <<endl;
    cin >> height;
    cout <<"Your weight in pounds: " <<endl;
    cin >> weight;
    cout <<" \n";
    BMI = (weight*0.453592)/(height*0.0254*height*0.0254);
    cout <<"Your BMI is " << BMI <<endl;
    if (BMI<15.0)
    {
        cout<<"BMI Category: very severely underweight" <<endl;
    }
    else if (BMI>=15.0 && BMI<=16.0)
    {
        cout <<"BMI Category: severely underweight" <<endl;
    }
    else if (BMI>=16.1 && BMI<=18.4)
    {
        cout <<"BMI Category: underweight" <<endl;
    }
    else if (BMI>=18.5 && BMI<=24.9)
    {
        cout <<"BMI Category: normal weight" <<endl;
    }
    else if (BMI>=25.0 && BMI<=29.9)
    {
        cout <<"BMI Category: overweight" <<endl;
    }
    else if (BMI>=30.0 && BMI<=34.9)
    {
        cout <<"BMI Category: moderately obese" <<endl;
    }
    else if (BMI>=35.0 && BMI<=39.9)
    {
        cout <<"BMI Category: severely obese" <<endl;
    }
    else
    {
        cout <<"BMI Category: very severely obese" <<endl;
    }
    return 0;


}