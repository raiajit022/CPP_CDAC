#include<iostream>
using namespace std;

void inputElements(int *arr,int size){
    cout << "enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}

int calc_avg(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum/size;
}
void display_avg(int avg){
    cout<<avg<<endl;

}

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n]; 
    inputElements(arr,n);
    int avg=calc_avg(arr,n);
    display_avg(avg);
    return 0;
}