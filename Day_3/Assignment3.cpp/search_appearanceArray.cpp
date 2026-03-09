#include<iostream>
using namespace std;

void inputElements(char *arr,int size){
    cout << "enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}

int search_appearanceArray(char *arr,int size,char target){
    int count = 0;
    for(int i =0;i<size;i++){
      if(arr[i]==target){
        count++;
      }
    }
    return count;
}

void display(char *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    char target;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    char arr[n]; 
    inputElements(arr,n);
    cout<<"Enter the target element"<<endl;
    cin>>target;
    display(arr,n);
    cout<<"count is = "<<search_appearanceArray(arr,n,target)<<endl;

    return 0;
}
