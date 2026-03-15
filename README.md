CPP Assignments


Student Record Management System

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <typeinfo>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r=0,string n="",float m=0) {
        if(m<0 || m>100)
            throw invalid_argument("Marks must be between 0 and 100");
        rollNo=r;
        name=n;
        marks=m;
    }

    virtual void display() {
        cout<<"Roll: "<<rollNo<<" Name: "<<name<<" Marks: "<<marks<<endl;
    }

    int getRoll() {
        return rollNo;
    }

    float getMarks() {
        return marks;
    }

    bool operator>(Student &s) {
        return marks > s.marks;
    }

    virtual string getData() {
        return to_string(rollNo)+" "+name+" "+to_string(marks);
    }

    virtual ~Student(){}
};

class GraduateStudent : public Student {
    string specialization;

public:
    GraduateStudent(int r,string n,float m,string sp)
        : Student(r,n,m) {
        specialization=sp;
    }

    void display() override {
        cout<<"Roll: "<<rollNo
            <<" Name: "<<name
            <<" Marks: "<<marks
            <<" Specialization: "<<specialization<<endl;
    }

    string getData() override {
        return to_string(rollNo)+" "+name+" "+to_string(marks)+" "+specialization;
    }
};

int main() {

    vector<Student*> students;
    int choice;

    do {
        cout<<"\n1 Add Student\n";
        cout<<"2 Display Students\n";
        cout<<"3 Sort by Marks\n";
        cout<<"4 Search by Roll\n";
        cout<<"5 Save to File\n";
        cout<<"6 Exit\n";
        cin>>choice;

        if(choice==1) {

            int type;
            cout<<"1 Normal Student\n2 Graduate Student\n";
            cin>>type;

            int r;
            string n;
            float m;

            cout<<"Enter roll name marks\n";
            cin>>r>>n>>m;

            try {

                if(type==1) {
                    students.push_back(new Student(r,n,m));
                }
                else {
                    string sp;
                    cout<<"Enter specialization\n";
                    cin>>sp;
                    students.push_back(new GraduateStudent(r,n,m,sp));
                }

            } catch(exception &e) {
                cout<<e.what()<<endl;
            }

        }

        else if(choice==2) {

            for(auto s:students) {

                if(typeid(*s)==typeid(GraduateStudent))
                    cout<<"Graduate Student -> ";

                s->display();
            }

        }

        else if(choice==3) {

            sort(students.begin(),students.end(),
            [](Student* a, Student* b){
                return a->getMarks() < b->getMarks();
            });

            cout<<"Sorted successfully\n";
        }

        else if(choice==4) {

            int r;
            cout<<"Enter roll number\n";
            cin>>r;

            bool found=false;

            for(auto s:students) {
                if(s->getRoll()==r) {
                    s->display();
                    found=true;
                }
            }

            if(!found)
                cout<<"Student not found\n";
        }

        else if(choice==5) {

            ofstream file("students.txt");

            for(auto s:students)
                file<<s->getData()<<endl;

            file.close();

            cout<<"Saved to file\n";
        }

    } while(choice!=6);

}
