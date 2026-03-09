#include<iostream>
using namespace std;

void inputElements(int *arr,int size){
    cout << "enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}


void display(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int student[n]; 
    inputElements(student,n);
    display(student,n);
    return 0;
}