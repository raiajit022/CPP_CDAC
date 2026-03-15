CPP Assignments


Student Record Management System

#include <iostream>
#include <vector>      // STL container
#include <algorithm>   // for sort()
#include <fstream>     // for file handling
#include <typeinfo>    // for RTTI
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;
    float marks;

public:

    // Constructor with validation (Exception Handling)
    Student(int r=0,string n="",float m=0) {

        if(m < 0 || m > 100)
            throw invalid_argument("Marks must be between 0 and 100");

        rollNo = r;
        name = n;
        marks = m;
    }

    // Virtual function for runtime polymorphism
    virtual void display() {
        cout << "Roll: " << rollNo
             << " Name: " << name
             << " Marks: " << marks << endl;
    }

    // Getter functions
    int getRoll() {
        return rollNo;
    }

    float getMarks() {
        return marks;
    }

    // Operator Overloading (compare marks)
    bool operator>(Student &s) {
        return marks > s.marks;
    }

    // Function used for file saving
    virtual string getData() {
        return to_string(rollNo) + " " + name + " " + to_string(marks);
    }

    // Virtual destructor
    virtual ~Student(){}
};

// Derived class
class GraduateStudent : public Student {

    string specialization;

public:

    // Parameterized constructor
    GraduateStudent(int r,string n,float m,string sp)
        : Student(r,n,m) {

        specialization = sp;
    }

    // Function overriding (Polymorphism)
    void display() override {

        cout << "Roll: " << rollNo
             << " Name: " << name
             << " Marks: " << marks
             << " Specialization: " << specialization
             << endl;
    }

    // Save extra data to file
    string getData() override {
        return to_string(rollNo) + " " + name + " " +
               to_string(marks) + " " + specialization;
    }
};

int main() {

    // STL container storing base class pointers
    vector<Student*> students;

    int choice;

    do {

        cout << "\n1 Add Student\n";
        cout << "2 Display Students\n";
        cout << "3 Sort by Marks\n";
        cout << "4 Search by Roll\n";
        cout << "5 Save to File\n";
        cout << "6 Exit\n";

        cin >> choice;

        // Add Student
        if(choice == 1) {

            int type;

            cout << "1 Normal Student\n2 Graduate Student\n";
            cin >> type;

            int r;
            string n;
            float m;

            cout << "Enter roll name marks\n";
            cin >> r >> n >> m;

            try {

                if(type == 1) {

                    students.push_back(new Student(r,n,m));

                } else {

                    string sp;

                    cout << "Enter specialization\n";
                    cin >> sp;

                    students.push_back(new GraduateStudent(r,n,m,sp));
                }

            } catch(exception &e) {

                cout << "Error: " << e.what() << endl;
            }
        }

        // Display students
        else if(choice == 2) {

            for(auto s : students) {

                // RTTI usage
                if(typeid(*s) == typeid(GraduateStudent))
                    cout << "Graduate Student -> ";

                s->display();
            }
        }

        // Sorting using STL
        else if(choice == 3) {

            sort(students.begin(), students.end(),

            [](Student* a, Student* b) {

                return a->getMarks() < b->getMarks();
            });

            cout << "Students sorted by marks\n";
        }

        // Searching student
        else if(choice == 4) {

            int r;

            cout << "Enter roll number\n";
            cin >> r;

            bool found = false;

            for(auto s : students) {

                if(s->getRoll() == r) {

                    s->display();
                    found = true;
                }
            }

            if(!found)
                cout << "Student not found\n";
        }

        // File handling
        else if(choice == 5) {

            ofstream file("students.txt");

            for(auto s : students)
                file << s->getData() << endl;

            file.close();

            cout << "Data saved to file\n";
        }

    } while(choice != 6);

}
