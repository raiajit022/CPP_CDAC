#include<iostream>
using namespace std;

int addusingoperator(int a, int b){

    while(b!= 0){
        int carry = a & b ;
        a = a^b;

        b = carry <<1;
    }
    return a;
}


int main(){
    int num1,num2;
    cout<<"enter two number to added :";
    cin>> num1>>num2;

    cout<< "the sum "<< addusingoperator(num1,num2)<< endl;
    return 0;
}