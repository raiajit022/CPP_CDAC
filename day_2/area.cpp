#include<iostream>
using namespace std;

const float pi = 3.14;

float areaofcircle(int radius){
    return pi * radius * radius;
}


int areaofrectangle(int length, int width){
    return length * width;
}


int areaofsquare(int side){
    return side * side;
}

int main(){
    int radius, length, width , side, choice;
    cout<<"1. Area of circle"<<endl;
    cout<<"2. Area of square"<<endl;
    cout<<"3. Area of rectangle"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
        switch (choice)
        {
        case 1:
                cout<<"enter the radius ="<< endl;
                cin>> radius;
            
                cout<<"area of circle ="<< areaofcircle(radius)<< endl;
                break;
        case 2:
                cout<<"enter the side ="<<endl;
                cin>>side;
            
                cout<<"area of square = "<< areaofsquare(side)<<endl;
                break;
        case 3: 
                cout<<"enter length ="<< endl;
                cout<<"enter width = "<< endl;
                cin>>length>>width;
            
                cout<<"area of the rectangle ="<< areaofrectangle(length,width)<< endl;
                break;
        default:
            break;

    }
    return 0;
}
