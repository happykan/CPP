//20 ways 
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <ctime>
using namespace std;
void method1()
{
    cout<<"123 \n456 \n789";
}
void method2()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
void method3()
{
    int p = 123;
    for(int i=0; i<3; i++)
    {
        cout<<(p+i*333)<<endl;
    }
}
void method4()
{
    for(int i=1; i<10; i++)
    {
        if(i%3==0)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<i;
        }
    }
}
void method5()
{
    for(int i=1; i<=9; i++)
    {
        cout<<i;
        if(i==3||i==6)
        {
            cout<<endl;
        }
    }
}
void method6()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    cout<<arr[3]<<arr[4]<<arr[5]<<endl;
    cout<<arr[6]<<arr[7]<<arr[8]<<endl;
}
void method7()
{
    int a=123, b=456, c=789;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
int method8()
{
    const int m=3, n=3;
    int mat[m][n]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(auto &row: mat)
    {
        for(auto &i: row)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print(vector <int> const &a)
{
    for(int count =0; count <3; count++)
    {
        cout<< a.at(count)<<" ";
    }
    cout <<endl;
    for(int count =3; count <6; count++)
    {
        cout<<a.at(count)<<" ";
    }
    cout<<endl;
    for(int count =6; count<9; count++)
    {
        cout <<a.at(count)<<" ";
    }
}
void method9()
{
    vector<int> a={1,2,3,4,5,6,7,8,9};
    print(a);
}
void method10()
{
    int j=0;
    do
    {
        int i=0;
        do
        {
            i++;
            cout<<(j*3)+i<<" ";
        }while (i<3);
        cout<<endl;
        j++;
    }while(j<3);
}
void method11()
{
    int counter =1;
    int i=0;
    while (i<3)
    {
        int j=0;
        do{
            cout<<counter<<" ";
            counter++;
            j++;
        }while(j<3);
        cout<<endl;
        i++;
    }
}
int array[] = {1,2,3,4,5,6,7,8,9};
void type()
{
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl<<array[3]<<" "<<array[4]<<" "<<array[5]<<endl<<array[6]<<" "<<array[7]<<" "<<array[8];
}
void method12()
{
    type();
}

void method14()
{
    int m=3, n=3;
    int a[3*3] = {1,2,3,4,5,6,7,8,9};
    int *ptr = a;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", *( ptr + (n*i+j) ));
        }
        printf("\n");
    }
}
void method15()
{
    int one = 1122;
    for(int i=3; i>=1; i--)
    {
        cout<<one -i*333<<endl;
    }
}
void method16()
{
    int arr[]={1,3,5,7,9,2,4,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }

        }
    }
    for(int i=0; i<size; i++)
    {
        cout <<arr[i];
        if(i %3 ==2)
        {
            cout<<endl;
        }else{}
    }
}
int main()
{
    //method1();
    //method2();
    //method3();
    //method4();
    //method5();
    //method6();
    //method7();
    //method8();
    //method9();
    //method10();
    //method11();
    //method12();
    //method13();
    //method14();
    //method15();
    method16();
}