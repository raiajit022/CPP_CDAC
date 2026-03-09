#include <iostream>
using namespace std;
void checkOddEven(int num){
    if(num%2==0){
        cout<<"number is even"<<endl;
    }
    cout<<"number is odd"<<endl;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    checkOddEven(num);
    return 0;
}