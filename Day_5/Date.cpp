#include "Date.h"
#include <iostream>

using namespace std;

// 1. Constructors
Date::Date() : dd(1), mm(1), yyyy(2000) {}

Date::Date(int d, int m, int y) : dd(d), mm(m), yyyy(y) {}

Date::~Date() {}

// 2. Calendar Logic
bool Date::isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::daysInMonth(int m, int y) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeapYear(y)) return 29;
    return days[m];
}

void Date::display() {
    cout << dd << "/" << mm << "/" << yyyy << endl;
}

// 3. Comparison Logic
int Date::compare(Date d2) {
    if (yyyy != d2.yyyy) return (yyyy > d2.yyyy) ? 1 : -1;
    if (mm != d2.mm) return (mm > d2.mm) ? 1 : -1;
    if (dd != d2.dd) return (dd > d2.dd) ? 1 : -1;
    return 0;
}

// 4. Operator Overloading
bool Date::operator == (Date d2) {
    return (dd == d2.dd && mm == d2.mm && yyyy == d2.yyyy);
}

bool Date::operator != (Date d2) {
    return !(*this == d2);
}

Date Date::operator + (int daysToAdd) {
    Date temp = *this;
    for (int i = 0; i < daysToAdd; i++) {
        temp.dd++;
        if (temp.dd > daysInMonth(temp.mm, temp.yyyy)) {
            temp.dd = 1;
            temp.mm++;
        }
        if (temp.mm > 12) {
            temp.mm = 1;
            temp.yyyy++;
        }
    }
    return temp;
}

int Date::operator - (Date d2) {
    Date dStart = d2;
    Date dEnd = *this;
    

    if (this->compare(d2) < 0) {
        dStart = *this;
        dEnd = d2;
    }

    int count = 0;
    while (dStart != dEnd) {
        dStart = dStart + 1; // Increment by 1 day using our + operator
        count++;
    }
    return count;
}