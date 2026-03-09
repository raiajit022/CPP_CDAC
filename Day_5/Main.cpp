#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    
    Date d1(6, 3, 2026);
    Date examDate(15, 3, 2026);

    cout << "Today is: "; d1.display();
    cout << "Exam is on: "; examDate.display();

    // Testing Difference (-)
    int daysLeft = examDate - d1;
    cout << "Days until exam: " << daysLeft << endl;

    // Testing Equality (==)
    if (d1 == examDate) {
        cout << "The exam is today!" << endl;
    } else {
        cout << "The exam is not today." << endl;
    }

    // Testing Addition (+)
    Date nextWeek = d1 + 7;
    cout << "Date after one week (d1 + 7): "; 
    nextWeek.display();

    return 0;
}