//Classes and Objects #3
#include <iostream>
#include <ctime>
using namespace std;
class student
{
private:
    string Name;
    int age, gradelevel;
    double GPA;
    char gender;
    double grades[4];

public:

    student(string n, int a, int g, char gen)
    {
        Name = n;
        gradelevel = g;
        age = a;
        gender = gen;
    }
    void calcGPA()
    {
        GPA = ((grades[0]+grades[1]+grades[2]+grades[3])/4)*5;
    }
    double getGPA()
    {
        return GPA;
    }
    void setGrade(string course, double grade)
    {
        if(course == "English")
        {
            grades[0] = grade;
        }
        else if(course == "Math")
        {
            grades[1] = grade;
        }
        else if(course == "Science")
        {
            grades[2] = grade;
        }
        else
        {
            grades[3] = grade;
        }
        
    }
    void printGrade()
    {
        cout<<"English "<<grades[0]<<endl;
        cout<<"Math "<<grades[1]<<endl;
        cout<<"Science "<<grades[2]<<endl;
        cout<<"Social study "<<grades[3]<<endl;
        cout<<"GPA: "<<GPA<<endl;
    }


};

int main()
{
    srand(time(NULL));

    student std1("Happy ", 17, 10, 'f');

    std1.setGrade("English", rand()%100+1);
    std1.setGrade("Math", rand()%100+1);
    std1.setGrade("Science", rand()%100+1);
    std1.setGrade("Social study", rand()%100+1);

    std1.calcGPA();
    std1.printGrade();

    student std2("Angel ", 16, 10, 'f');

    std2.setGrade("English", rand()%100+1);
    std2.setGrade("Math", rand()%100+1);
    std2.setGrade("Science", rand()%100+1);
    std2.setGrade("Social study", rand()%100+1);

    std2.calcGPA();
    std2.printGrade();

    //double gpa1 = std1.getGPA;
    //double gpa2 = std2.getGPA;

    //cout<<std1.getGPA()<< " "<<std2.getGPA()<<endl;


    if(std1.getGPA() == std2.getGPA())
    {
        cout<<"Their GPA are the same."<<endl;
    }
    else if(std1.getGPA() > std2.getGPA())
    {
        cout<<"Student1 grade is higher than student2."<<endl;
        cout<<((std1.getGPA())-(std2.getGPA()))<<endl;
    }
    else
    {
        cout<<"Student2 grade is higher than student1."<<endl;
        cout<<((std2.getGPA())-(std1.getGPA()))<<endl;
    }


    return 0;

}