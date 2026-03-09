#include<iostream>
using namespace std;
void swap_numbers(int* n1,int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main(){
    int num1,num2;
    cout<<"Enter the two Numbers for swapping"<<endl;
     cin>>num1>>num2;
    cout<<"Numbers before swap " << num1 << ","<< num2<<endl;
    swap_numbers(&num1,&num2);
    cout<<"Numbers after swap "<<num1<<","<<num2<<endl;
     return 0;
}