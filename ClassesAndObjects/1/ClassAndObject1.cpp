//Class and Object #1
#include <iostream>
#include <list>
using namespace std;
class Dog{
private:
    int Age;
    double Weight;
public: 
//constructor name Dog (must be same name with the classname)   
    Dog(int cAge, double cWeight)
    {
        Age=cAge;
        Weight=cWeight;
    }

    void GetInfo()
    {
        cout<<"Age: "<<Age<<endl;
        cout<<"Weight: "<<Weight<<endl;
    }
    //int getAge(){
    //  return Age;
    //}

};

int main()
    {
        Dog dog1(10, 29);
        //Dog dog2(2, 15);
        dog1.GetInfo();
        //cout<<dog1.getAge();
    
    return 0;
}