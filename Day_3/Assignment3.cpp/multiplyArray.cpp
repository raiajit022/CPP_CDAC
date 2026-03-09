#include<iostream>
using namespace std;

void inputElements(int *arr,int size){
    cout << "enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}
void mul_array(int *arr,int size){
    
    for(int i=0;i<size;i++){
        arr[i]*=2;
    }
}
void display_array(int* arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n]; 
    inputElements(arr,n);
    mul_array(arr,n);
    display_array(arr,n);
    
    return 0;
}