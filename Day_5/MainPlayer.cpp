#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    const int SIZE = 1; 
    Player team[SIZE];

    cout << "Enter Details for " << SIZE << " Players " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "\nPlayer " << (i + 1) << ":" << endl;
        team[i].Accept();
    }

    cout << "\n Unsorted Player List " << endl;
    for (int i = 0; i < SIZE; i++) {
        team[i].Display();
    }

    // Pass the array to the global Sort function
    SortPlayers(team, SIZE);

    cout << "\n Sorted Player List (By Name, then Age) " << endl;
    for (int i = 0; i < SIZE; i++) {
        team[i].Display();
    }

    return 0;
}