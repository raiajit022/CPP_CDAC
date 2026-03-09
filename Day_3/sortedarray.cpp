#include <iostream>
using namespace std;

void sort_and_display(int arr[], int n) {
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int main() {
    int myArray[] = {1, 4, 5, 32};
    // Calculate the size of the array
    int n = sizeof(myArray) / sizeof(myArray[0]); 

    sort_and_display(myArray, n);

    return 0;
}
