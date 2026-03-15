#include<iostream>
using namespace std;

int main()
{
    int marks[5], count=0;
    float sum=0;

    cout<<"Enter 5 marks:\n";

    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
        sum += marks[i];

        if(marks[i] < 65)
            count++;
    }

    cout<<"Average = "<<sum/5<<endl;
    cout<<"Marks less than 65 = "<<count<<endl;

    return 0;
}