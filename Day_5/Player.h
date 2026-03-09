#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std; 

class Player {
private:
    string name;
    int age;
    string country;

public:
    // Default constructor
    Player();

    // Parameterized constructor
    Player(string n, int a, string c);

    // Accept function for data input
    void Accept();

    // Display function for data display
    void Display() const;

    // Getters needed for the sorting function
    string getName() const;
    int getAge() const;
};

// Global function to sort the array of Player objects
void SortPlayers(Player arr[], int size);

#endif // PLAYER_H