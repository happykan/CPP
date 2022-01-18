//Variables Your Schedule Happy Kan 15 pts
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string course1, course2, course3, course4, course5, course6, course7, course8, teacher1, teacher2, teacher3, teacher4, teacher5, teacher6, teacher7, teacher8;

    course1 = "Honors_Pre_Calculus";
    course2 = "Honors_English";
    course3 = "Biology_With_Lab";
    course4 = "Honors_US_History";
    course5 = "Economics";
    course6 = "Honors_Expository_Writing_II";
    course7 = "AP_Human_Geography";
    course8 = "Java_Programming";

    teacher1 = "Ms._Elaine";
    teacher2 = "Mr._Ciancio";
    teacher3 = "Ms._Sandra";
    teacher4 = "Mr._Cook";
    teacher5 = "Mr._Vincent";
    teacher6 = "Mr._Ciancio";
    teacher7 = "Mr._Levin";
    teacher8 = "Ms._Tina";

    std::cout <<"+-------------------------------------------------------------------+\n";
    std::cout <<"| 1 | " + course1 +"                | " + teacher1 + "               | \n";
    std::cout <<"| 2 | " + course2 + "                     | " + teacher2 + "              | \n";
    std::cout <<"| 3 | " + course3 + "                   | " + teacher3 + "               | \n";
    std::cout <<"| 4 | " + course4 + "                  | " + teacher4 + "                 | \n";
    std::cout <<"| 5 | " + course5 + "                          | " + teacher5 + "              | \n" ;
    std::cout <<"| 6 | " + course6 + "       | " + teacher6 + "              | \n" ;
    std::cout <<"| 7 | " + course7 + "                 | " + teacher7 + "                | \n" ;
    std::cout <<"| 8 | " + course8 + "                   | " + teacher8 + "                 | \n" ;
    std::cout <<"+-------------------------------------------------------------------+\n" ;

    return 0;
}