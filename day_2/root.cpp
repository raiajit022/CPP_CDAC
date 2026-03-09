#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c ,discriminant;
    cout<<"enter coefficient of x^2";
    cin>>a;
    cout<<"enter coefficient of x";
    cin>>b;
    cout<<"enter value of constant";
    cin>>c;
    discriminant=(b*b)-4*a*c;
    cout<<"root1 is :"<<(-b+sqrt(discriminant))/2*a<<endl;
    cout<<"root2 is :"<<(-b-sqrt(discriminant))/2*a<<endl;
}