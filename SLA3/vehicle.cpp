#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;

// Template function to validate year
template <typename T>
bool validateYear(T year)
{
    time_t t = time(0);
    tm *now = localtime(&t);
    int currentYear = now->tm_year + 1900;

    return (year >= 2000 && year <= currentYear);
}

class Vehicle
{
protected:
    string regNo, model, manufacturer;
    int year;

public:
    static int count;

    Vehicle() {}

    Vehicle(string r, string m, string man, int y)
    {
        if(r.empty())
            throw invalid_argument("Registration number cannot be empty");

        if(!validateYear(y))
            throw invalid_argument("Invalid Year");

        regNo = r;
        model = m;
        manufacturer = man;
        year = y;

        count++;
    }

    virtual void displayInfo() = 0;

    inline string formatBase()
    {
        return "RegNo: " + regNo +
               ", Model: " + model +
               ", Manufacturer: " + manufacturer +
               ", Year: " + to_string(year);
    }

    virtual ~Vehicle(){}
};

int Vehicle::count = 0;


// Derived class Car
class Car : public Vehicle
{
    string fuelType;

public:
    Car(string r, string m, string man, int y, string fuel)
        : Vehicle(r, m, man, y)
    {
        fuelType = fuel;
    }

    void displayInfo()
    {
        cout << formatBase()
             << ", FuelType: " << fuelType << endl;
    }
};


// Derived class Bike
class Bike : public Vehicle
{
    string engineCapacity;

public:
    Bike(string r, string m, string man, int y, string cap)
        : Vehicle(r, m, man, y)
    {
        engineCapacity = cap;
    }

    void displayInfo()
    {
        cout << formatBase()
             << ", EngineCapacity: " << engineCapacity << endl;
    }
};

int main()
{
    vector<Vehicle*> vehicles;
    ofstream fout("vehicles.dat", ios::binary);
    int n;

    cout << "Enter number of vehicles: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        char type;
        string reg, model, man;
        int year;

        cout << "\nEnter type of vehicle (C for Car, B for Bike): ";
        cin >> type;

        cout << "Enter Registration Number: ";
        cin >> reg;

        cout << "Enter Model Name: ";
        cin >> model;

        cout << "Enter Manufacturer: ";
        cin >> man;

        cout << "Enter Year: ";
        cin >> year;

        try
        {
            if(type == 'C' || type == 'c')
            {
                string fuel;
                cout << "Enter Fuel Type: ";
                cin >> fuel;

                vehicles.push_back(new Car(reg,model,man,year,fuel));
            }
            else if(type == 'B' || type == 'b')
            {
                string cap;
                cout << "Enter Engine Capacity: ";
                cin >> cap;

                vehicles.push_back(new Bike(reg,model,man,year,cap));
            }
        }
        catch(exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }

    // Write to file
    for(auto v : vehicles)
    {
        fout.write((char*)v, sizeof(*v));
    }

    fout.close();

    cout << "\nVehicle Records:\n";

    // Display using polymorphism
    for(auto v : vehicles)
    {
        v->displayInfo();
    }

    cout << "--------------------------------------------\n";
    cout << "Total Vehicles stored: " << Vehicle::count << endl;

    return 0;
}