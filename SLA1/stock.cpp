#include <iostream>
using namespace std;

class Stock
{
    int stockLevel;
    float unitPrice;

public:

    void setValues(int s, float p)
    {
        stockLevel = s;
        unitPrice = p;
    }

    int getStock()
    {
        return stockLevel;
    }

    float getPrice()
    {
        return unitPrice;
    }

    void receiveStock(int qty)
    {
        stockLevel = stockLevel + qty;
        cout << "Stock received successfully\n";
    }

    void issueStock(int qty)
    {
        if(qty <= stockLevel)
        {
            stockLevel = stockLevel - qty;
            cout << "Stock issued successfully\n";
        }
        else
        {
            cout << "Insufficient stock\n";
        }
    }
};

int main()
{
    Stock s;
    int choice, qty, stock;
    float price;

    cout << "Enter Initial Stock Level: ";
    cin >> stock;

    cout << "Enter Unit Price: ";
    cin >> price;

    s.setValues(stock, price);

    do
    {
        cout << "\n--- MENU ---";
        cout << "\n1. View Stock";
        cout << "\n2. Receive Stock";
        cout << "\n3. Issue Stock";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Current Stock: " << s.getStock() << endl;
                cout << "Unit Price: " << s.getPrice() << endl;
                break;

            case 2:
                cout << "Enter quantity to receive: ";
                cin >> qty;
                s.receiveStock(qty);
                break;

            case 3:
                cout << "Enter quantity to issue: ";
                cin >> qty;
                s.issueStock(qty);
                break;

        }

    } while(choice != 4);

    return 0;
}