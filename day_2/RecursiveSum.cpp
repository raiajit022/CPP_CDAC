#include <iostream>
using namespace std;

int PrintRecursiveSum(int num) {

    if (num == 0) {
        return 0;
    }

    int currentSum = num + PrintRecursiveSum(num - 1);

    cout <<"adding "<<num<<":"<<currentSum << endl;

    return currentSum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int total = PrintRecursiveSum(num);
    cout << "Final Total: " << total << endl;
    return 0;
}
