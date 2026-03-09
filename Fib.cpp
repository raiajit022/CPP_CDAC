#include<iostream>
using namespace std;

int fibnocci(int n){

    if (n==0){
        return 0;
    }
    else if (n==1)
    {
        return 1;
    } else {
        return fibnocci(n-1) + fibnocci(n-2);
    }
}


int main (){
    int n;

    cout<< "Enter your number"<< endl;
    cin>>n;

    fibnocci(n);

    for (int i=0; i< n; i++){;
    cout<<fibnocci(i);
    }
}