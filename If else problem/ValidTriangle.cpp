// Triangle is valid or not by side.

#include<iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout<< "Enter three sides of an triangle: ";
    cin>> side1 >> side2 >> side3;

    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        cout<< "Valid" << endl;
    }
    else
    {
        cout<< "Not valid" << endl;
    }
}