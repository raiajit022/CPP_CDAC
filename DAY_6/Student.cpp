#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    string name;

public:
    Student() : rollno(0), name(" ") {}

    void setData() {
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
    }

    void showData() const {
        cout << "Roll No: " << rollno << " \t Name: " << name << endl;
    }
}; // <--- CLASS ENDS HERE

// accept function starts here

void Accept(Student arr[], int &count, int maxcapacity) {
    if (count < maxcapacity) {
        cout << "Adding student at index: " << count << endl;
        arr[count].setData();
        count++;
        cout << "Student added successfully!" << endl;
    } else {
        cout << "Array full!" << endl;
    }
}

void Display(Student arr[], int count) {
    if (count == 0) {
        cout << "\nNo records found to display." << endl;
        return;
    }
    cout << "\n--- Current Student List (" << count << " total) ---" << endl;
    for (int i = 0; i < count; i++) {
        arr[i].showData();
    }
}

// --- MAIN FUNCTION (Outside the class) ---
int main() {
    const int MAX = 5;
    Student classroom[MAX];
    int currentCount = 0;
    int choice;

    do {
        cout << "\n--- Student Management Menu ---" << endl;
        cout << "1. Add Student\n2. Display All\n3. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Accept(classroom, currentCount, MAX);
                break;
            case 2:
                Display(classroom, currentCount);
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}