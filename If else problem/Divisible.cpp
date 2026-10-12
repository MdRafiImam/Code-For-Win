// A number is divisible by 5 and 11 or not.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<< "Enter a number: ";
    cin>> num;

    if(num % 5 == 0 && num % 11 == 0)
    {
        cout<< num << " is divisible by both 5 and 11" << endl;
    }
    else if(num % 5 == 0)
    {
        cout<< num << " is divisible by 5 only" << endl;
    }
    else if(num % 11 == 0)
    {
        cout<< num << " is divisible by 11 only" << endl;
    }
    else
    {
        cout<< num << " is not divisible by 5 or 11" << endl;
    }
}