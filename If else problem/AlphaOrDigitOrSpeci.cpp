// Alphabet, digit or special character.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<< "Press any key: ";
    cin>> ch;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout<< "Alphabet" << endl;
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<< "Digit" << endl;
    }
    else
    {
        cout<< "Special character" << endl;
    }
}