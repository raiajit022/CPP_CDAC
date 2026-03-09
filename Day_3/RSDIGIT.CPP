#include<iostream>
using namespace std;

int sumofnumber (int n)
{
    if(n == 0)
    return 0;

    int sum , num1;
    cout<< "Enter the number's to add :"<<'\t';
    cin>>num1;
    sum = sum + num1;

    return num1 + sumofnumber (n-1);
}

int main ()
{
    int num, runsum, sum = 0;
    
    cout<< "Enter how many numbers you want to add";
    cin>> num;

    runsum= sumofnumber(num);
    cout<< "Running sum of the numbers :"<< runsum;

    return 0;
}