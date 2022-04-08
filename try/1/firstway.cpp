#include <iostream>
#include <algoithm>
#include <stdio.n>
using namespace std;
void firstway() 
{
    for (int i=1; i<=17; i=i+2){
        cout<<i<<" ";
        if (i==5 || i==11 || i==17)
        {
            cout<<endl;
        }
    }
    return 0;
}
void secondway()
{
    cout<<"1 3 5"<<endl;
    cout<<"7 9 11"<<endl;
    cout<<"13 15 17"<<endl;
    return 0;
}
void thirdway()
{
    string a="1 3 5", b="7 9 11", c="13 15 17";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
void fourthway()
{
    class print
    {
        private:
            string num;

        public:
            print();
            print(string n)
            {
                num = n;
            }
            string getNum()
            {
                return num;
            }
    };
    int main()
    {
        print prt("1 3 5 \n 7 9 11 \n 13 15 17");
        cout << prt.getNum();
    }
}

void fifthway()
{
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    void type()
    {
        cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl<<array[3]<<" "<<array[4]<<" "<<array[5]<<endl<<array[6]<<" "<< array[7]<<" "<< array[8];
    }
    int main()
    {
        type();
    }
}
void sixthwayh()
{
    int main()
    {
        const int m = 3, n = 3;
        int mat[m][n] = {
            {1, 3, 5},
            {7, 9, 11},
            {13, 15, 17}
        };
        for (auto &row: mat)
        {
            for (ato &i: row)
            {
                cout << i << ' ';

            }
            cout <<endl;
        }

        return 0;
    }
}
void seventhway()
{
    int main()
    {
        int m=3, n=3;
        int a[3*3] = {1,3,5,7,9,11,13,15,17};
        int*ptr = a;
        for(int i=0 j<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"%d ", *(( ptr + (n*i+j)));
                cout<<"\n";
            }
            return 0;
        }
    }
}
void eighthway()
{
    void printArray2D(int* list, int row, int col)
    {
        for (int i=1; i<row;i=++)
        {
            for(int j=0; j <col; j++)
            {
                cout<<list[i *col * j]<<" ";
            }
            cout <<endl;
        }
    }
    int main()
    {
        int list1[3][3] = {{1,3,5},{7,9,11},{13,15,17}};
        int row1 = sizeof(list1)/sizeof(list1[0]);
        int col1 = sizeof(list1[0])/sizeof(list1[0][0]);
        printArray2D((int*)list1, row1, col1);
        return 0;
    }
}