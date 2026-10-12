// Alphabet or not.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<< "Enter any key: ";
    cin>> ch;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout<< "Alphabet" << endl;
    }
    else
    {
        cout<< "This is not an Alphabet" << endl;
    }
}