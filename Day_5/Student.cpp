#include<iostream>
#include<string>
using namespace std;

class student {
private:
    int rollno;
    string name;
    string course;

public:
    student() { // default constructor
        rollno = 0;
        name = "";
        course = "";
    }

    student(int r, string n, string c) { // parameterized constructor
        rollno = r;
        name = n;
        course = c;
    }

    ~student() { // destructor
        cout << "Student object for Roll No " << rollno << " destroyed." << endl;
        
    }

    void accept() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter course: ";
        cin >> course;
    }

    void display() {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }

    int getRollNo() {
        return rollno;
    }
};

// Function to search student by roll number
void findstudent(student *arr[], int n, int r) {
    for (int i = 0; i < n; i++) {
        if (arr[i]->getRollNo() == r) {
            cout << "\nStudent found: " << endl;
            arr[i]->display();
            return;
        }
    }
    cout << "\nStudent not found" << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    student* arr[n]; // Array of student pointers

    for (int i = 0; i < n; i++) {
        arr[i] = new student();
        arr[i]->accept();
    }

    cout << "\nStudent details:\n";
    for (int i = 0; i < n; i++) {
        arr[i]->display();
        cout << endl;
    }

    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;
    findstudent(arr, n, roll);

    // Free memory
    for (int i = 0; i < n; i++) {
        delete arr[i];
    }

    return 0;
}
