#include<iostream>
using namespace std;

int main()
{
    int a[3][3], t[3][3];

    cout<<"Enter 3x3 matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            t[j][i] = a[i][j];

    cout<<"Original Matrix:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<"Transpose Matrix:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}