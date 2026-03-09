#include<iostream>
using namespace std;

void reverseArray(char *arr,int n){
    int i=0,j=n-1;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
         i++;
         j--;
    }
}

int main(){
    int num;
    char arr[num];
    cout<<"Enter the size of array:"<<endl;
    cin>>num;
    reverseArray(arr,num);
    
    return 0;
}