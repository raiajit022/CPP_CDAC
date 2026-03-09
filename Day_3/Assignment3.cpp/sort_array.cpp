#include<iostream>
using namespace std;

void inputElements(int *arr,int size){
    cout << "enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}
void sortArray(int *arr,int size){
    int curr=0;
    int min_idx=0;
    while(curr<size){
        int min_ele=10000;
        for(int i=curr;i<size;i++){
            if(arr[i]<min_ele){
                min_ele=arr[i];
                min_idx=i;
            }
        }
        int temp=arr[curr];
        arr[curr]=arr[min_idx];
        arr[min_idx]=temp;
        curr++;

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
    int arr[n]; 
    inputElements(arr,n);
    sortArray(arr,n);
    display(arr,n);
    return 0;
}