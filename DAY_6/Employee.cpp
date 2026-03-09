#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Employee{

    private:                    // data members are private cause they are not accessible outside the class
        string EmployeeName;
        int EmployeeID;
        double salary;

        public:

        Employee()              // default constructor
        {
            EmployeeID= 0;
            EmployeeName = " ";
            salary = 0.0; 
        }

        Employee(int id, string n, double s)  // parameterized constructor
        {
            EmployeeID = id;
            EmployeeName = n;
            salary = s;
        }

// getter method for read only for sorting salary

        double getsal () const{
            return salary;
        }

// display all the values 

void display () const
{
    cout<<"Id :"<<EmployeeID<<"Name : "<<EmployeeName<<"Salary :"<< salary<< endl;
}

// method to input employee

void input()
{
    cout<<"Enter Employee ID :";
    cin>>EmployeeID;
    cout<<"Enter Employee name : ";
    cin.ignore();  // to clear the buffer 
    getline(cin, EmployeeName);
    cout << "Enter salary : ";
    cin >> salary;
}
};

// to print array 

void printarray(Employee arr[], int size)
{
    cout<<"Employee list";
    for (int i = 0; i < size ; i++)
    {
        arr[i].display();
    }
}

// for sorting employee

void sortemployee (Employee arr[], int size, int choice)
{
    for (int i = 0; i < size -1; i++){
        for (int j = 0; j < size - 1; j++){
            bool shouldswap = false;

            if (choice == 1){
                if (arr[j].getsal() > arr[j + 1].getsal()) shouldswap = true;
            } else{
                if ((arr[j].getsal() < arr[j+1].getsal())) shouldswap = true; 
            }

            if (shouldswap) {
                // to swap entire object 
                Employee temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main ()
{   
    int n;
    cout<< "Enter the number of Employees: ";
    cin>> n;

    // create array object 
    Employee staff[n];

    // input array object

    for(int i = 0; i<n ; i++){
        cout<<"\nEmployee deatils: "<<(i+1)<<" : "<<endl;
        staff[i].input();
    }

    // for sorting data
    int choice;
    cout<<"How you want to sort: "<<endl;
    cout<<"1. Ascending (low to high)"<<endl;
    cout<<"2. Decending (High to low)"<< endl;
    cout<<"choice";
    cin>>choice;

    sortemployee(staff, n, choice);

    cout<<"\nSorted details: "<<endl;
    printarray(staff,n);

    return 0;
}