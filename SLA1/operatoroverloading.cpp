#include<iostream>
using namespace std;

class Matrix
{
public:
    int a[2][2];

    void input()
    {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>>a[i][j];
    }

    void display()
    {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                r.a[i][j]=a[i][j]+m.a[i][j];
        return r;
    }

    Matrix operator-(Matrix m)
    {
        Matrix r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                r.a[i][j]=a[i][j]-m.a[i][j];
        return r;
    }

    Matrix operator*(Matrix m)
    {
        Matrix r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++){
                r.a[i][j]=0;
                for(int k=0;k<2;k++)
                    r.a[i][j]+=a[i][k]*m.a[k][j];
            }
        return r;
    }
};

int main()
{
    Matrix m1,m2,m3;
    int choice;

    cout<<"Enter Matrix 1:\n";
    m1.input();

    cout<<"Enter Matrix 2:\n";
    m2.input();

    cout<<"1.Add\n2.Subtract\n3.Multiply\n";
    cin>>choice;

    switch(choice)
    {
        case 1: m3 = m1 + m2; break;
        case 2: m3 = m1 - m2; break;
        case 3: m3 = m1 * m2; break;
    }

    cout<<"Result:\n";
    m3.display();
}