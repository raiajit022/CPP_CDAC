#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void accept()
    {
        cout << "Enter Hours: ";
        cin >> hour;

        cout << "Enter Minutes: ";
        cin >> minute;

        cout << "Enter Seconds: ";
        cin >> second;
    }

    void addHours(int h)
    {
        hour = hour + h;
    }

    void addMinutes(int m)
    {
        minute = minute + m;

        if(minute >= 60)
        {
            hour = hour + minute / 60;
            minute = minute % 60;
        }
    }

    void addSeconds(int s)
    {
        second = second + s;

        if(second >= 60)
        {
            minute = minute + second / 60;
            second = second % 60;
        }

        if(minute >= 60)
        {
            hour = hour + minute / 60;
            minute = minute % 60;
        }
    }

    void display()
    {
        cout << "Modified Time: ";
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    Time t;
    int choice, value;

    t.accept();

    cout << "\n1. Add Hours";
    cout << "\n2. Add Minutes";
    cout << "\n3. Add Seconds";
    cout << "\nEnter Choice: ";
    cin >> choice;

    cout << "Enter value to add: ";
    cin >> value;

    switch(choice)
    {
        case 1:
            t.addHours(value);
            break;

        case 2:
            t.addMinutes(value);
            break;

        case 3:
            t.addSeconds(value);
            break;

        default:
            cout << "Invalid Choice";
    }

    t.display();

    return 0;
}