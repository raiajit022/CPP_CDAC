#include "MobilePhone.h"
#include <iostream>
using namespace std;

int main()
{
    MobilePhone mobiles[50];
    int count = 0;
    int choice;

    do
    {
        cout<<"\n---- Mobile Management System ----\n";
        cout<<"1. Add Mobile\n";
        cout<<"2. Display List of Mobiles\n";
        cout<<"3. Find Quantity of Particular Mobile\n";
        cout<<"4. Check Availability of Model\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                mobiles[count].accept();
                count++;
                break;

            case 2:
                for(int i=0;i<count;i++)
                    mobiles[i].display();
                break;

            case 3:
            {
                string model;
                cout<<"Enter model number: ";
                cin>>model;

                for(int i=0;i<count;i++)
                {
                    if(mobiles[i].getModelNo()==model)
                        cout<<"Quantity: "<<mobiles[i].getQuantity()<<endl;
                }
                break;
            }

            case 4:
            {
                string model;
                bool found=false;

                cout<<"Enter model number: ";
                cin>>model;

                for(int i=0;i<count;i++)
                {
                    if(mobiles[i].getModelNo()==model)
                    {
                        cout<<"Model Available\n";
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Model Not Available\n";

                break;
            }

            case 5:
                cout<<"Exiting...\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }

    } while(choice!=5);

    return 0;
}