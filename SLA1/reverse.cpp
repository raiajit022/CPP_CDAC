#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[])
{
    int i, len;
    char temp;

    len = strlen(str);

    for(i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int main()
{
    char str[100];

    cout << "Enter a line: ";
    cin.getline(str, 100);

    reverse(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}