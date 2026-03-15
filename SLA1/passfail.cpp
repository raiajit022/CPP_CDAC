#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int m1, m2, m3;

public:
    void getdata()
    {
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter 3 Marks: ";
        cin>>m1>>m2>>m3;
    }

    void result()
    {
        if(m1>=50 && m2>=50 && m3>=50)
            cout<<name<<" : PASS"<<endl;
        else
            cout<<name<<" : FAIL"<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++)
        s[i].getdata();

    for(int i=0;i<n;i++)
        s[i].result();

    return 0;
}