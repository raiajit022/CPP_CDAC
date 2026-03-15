#include <iostream>
using namespace std;

class DONOR
{
    int dno, age;
    char name[30], address[50], sex[10], bg[5];

public:
    void accept()
    {
        cout<<"Enter Donor No: ";
        cin>>dno;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Age: ";
        cin>>age;

        cout<<"Enter Address: ";
        cin>>address;

        cout<<"Enter Sex: ";
        cin>>sex;

        cout<<"Enter Blood Group: ";
        cin>>bg;
    }

    void display()
    {
        cout<<"Donor No: "<<dno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"------------------"<<endl;
    }

    char* getBG()
    {
        return bg;
    }

    int getAge()
    {
        return age;
    }

    char* getSex()
    {
        return sex;
    }
};

int main()
{
    DONOR d[10];
    int n, ch;

    cout<<"Enter number of donors: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        d[i].accept();
    }

    do
    {
        cout<<"\n1. Blood Group O+";
        cout<<"\n2. Age between 18 to 25";
        cout<<"\n3. Female donors with Blood Group A and Age 21-24";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"\nDonors with Blood Group O+\n";
                for(int i=0;i<n;i++)
                {
                    if(strcmp(d[i].getBG(),"O+")==0)
                        d[i].display();
                }
                break;

            case 2:
                cout<<"\nDonors Age 18-25\n";
                for(int i=0;i<n;i++)
                {
                    if(d[i].getAge()>=18 && d[i].getAge()<=25)
                        d[i].display();
                }
                break;

            case 3:
                cout<<"\nFemale donors Blood Group A Age 21-24\n";
                for(int i=0;i<n;i++)
                {
                    if(strcmp(d[i].getSex(),"Female")==0 &&
                       strcmp(d[i].getBG(),"A")==0 &&
                       d[i].getAge()>=21 && d[i].getAge()<=24)
                        d[i].display();
                }
                break;

        }

    }while(ch!=4);

    return 0;
}