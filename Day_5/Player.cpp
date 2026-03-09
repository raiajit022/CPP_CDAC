#include "Player.h"
#include <iostream>

using namespace std;

// Default constructor
Player::Player() {
    name = '\o';
    age = 0;
    country = '\o';
}

// Parameterized constructor
Player::Player(string n, int a, string c) {
    name = n;
    age = a;
    country = c;
}

// Accept Function
void Player::Accept() {
    cout << "Enter Player Name: ";
    cin >> name; 
    cout << "Enter Player Age: ";
    cin >> age;
    cout << "Enter Player Country: ";
    cin >> country;
}

// Display Function
void Player::Display() const {
    cout << "Name: " << name << " | Age: " << age << " | Country: " << country << endl;
}

// Getters
string Player::getName() const {
    return name;
}

int Player::getAge() const {
    return age;
}

// Global Sorting Function (Sort by Name, then by Age)
void SortPlayers(Player arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            
            bool swapNeeded = false;
            if (arr[j].getName() > arr[j + 1].getName()) {
                swapNeeded = true;
            } 
            else if (arr[j].getName() == arr[j + 1].getName() && arr[j].getAge() > arr[j + 1].getAge()) {
                swapNeeded = true;
            }

            if (swapNeeded) {
                Player temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}