#include<iostream>
using namespace std;

class Time { 
    int hours;
    int minutes;
    int seconds;

public:
    Time() { 
        hours = 0; minutes = 0; seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h; minutes = m; seconds = s;
    }

    ~Time() {
        cout << "Time object destroyed." << endl;
    }

    void accept() {
        cout << "Enter hours: "; cin >> hours;
        cout << "Enter minutes: "; cin >> minutes;
        cout << "Enter seconds: "; cin >> seconds;
    }

    void display() {
        cout << "Time: " << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }

    // This replaces addTime and allows t3 = t1 + t2
    Time operator+(const Time& t) {
        int s = seconds + t.seconds;
        int m = minutes + t.minutes + (s / 60);
        int h = hours + t.hours + (m / 60);
        
        return Time(h, m % 60, s % 60);
    }
};

int main() {
    Time t1, t2, t3;
    
    cout << "Enter first time:" << endl;
    t1.accept();
    
    cout << "Enter second time:" << endl;
    t2.accept();

    // Using the overloaded + operator
    t3 = t1 + t2;

    cout << "\nSum of times:" << endl;
    t3.display();

    return 0;
}
