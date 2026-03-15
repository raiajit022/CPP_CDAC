#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float p, r, t, SI, CI;

    cout<<"Enter Principal: ";
    cin>>p;

    cout<<"Enter Rate: ";
    cin>>r;

    cout<<"Enter Time: ";
    cin>>t;

    SI = (p * r * t) / 100;

    CI = p * pow((1 + r/100), t) - p;

    cout<<"Simple Interest = "<<SI<<endl;
    cout<<"Compound Interest = "<<CI<<endl;

    return 0;
}