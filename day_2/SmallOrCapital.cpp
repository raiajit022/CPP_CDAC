#include <iostream>
using namespace std;
void checkSmallCapital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "entered character is capital" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "entered character is small" << endl;
    }
    else
    {
        cout << "wrong input" << endl;
    }
}
int main()
{
    char ch;
    cout << "enter character" << endl;
    cin >> ch;
    checkSmallCapital(ch);
    return 0;
}