// Total number of notes in given amount.

#include<iostream>
using namespace std;

int main()
{
    int amount, note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    note1000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    
    cout<< "Enter an amount: ";
    cin>> amount;

    if(amount >= 1000)
    {
        note1000 = amount / 1000;
    }
    amount = amount - (note1000 * 1000);

    if(amount >= 500)
    {
        note500 = amount / 500;
    }
    amount = amount - (note500 * 500);

    if(amount >= 200)
    {
        note200 = amount / 200;
    }
    amount = amount - (note200 * 200);

    if(amount >= 100)
    {
        note100 = amount / 100;
    }
    amount = amount - (note100 * 100);

    if(amount > 50)
    {
        note50 = amount / 50;
    }
    amount = amount - (note50 * 50);

    if(amount >= 20)
    {
        note20 = amount / 20;
    }
    amount = amount - (note20 * 20);

    if(amount >= 10)
    {
        note10 = amount / 10;
    }
    amount = amount - (note10 * 10);

    if(amount >= 5)
    {
        note1000 = amount / 5;
    }
    amount = amount - (note5 * 5);

    if(amount > 2)
    {
        note2 = amount / 2;
    }
    amount = amount - (note2 * 2);

    if(amount >= 1)
    {
        note1 = amount / 1;
    }
    amount = amount - (note1 * 1);

    cout<< "Note 1000: " << note1000 << endl;
    cout<< "Note 500: " << note500 << endl;
    cout<< "Note 200: " << note200 << endl;
    cout<< "Note 100: " << note100 << endl;
    cout<< "Note 50: " << note50 << endl;
    cout<< "Note 20: " << note20 << endl;
    cout<< "Note 10: " << note10 << endl;
    cout<< "Note 5: " << note5 << endl;
    cout<< "Note 2: " << note2 << endl;
    cout<< "Note 1: " << note1 << endl;
}