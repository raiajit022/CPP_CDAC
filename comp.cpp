#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float principle, ROI, timePeriod, CI;

    cout << "enter your principle : " << endl;
    cin >> principle;

    cout << "enter rate of intrest : " << endl;
    cin >> ROI;

    cout << "enter no of years : " << endl;
    cin >> timePeriod;

    float amount = principle * pow((1 + (ROI / 100)), timePeriod);

    cout << "Your compound intrest is : " << amount - principle;
}