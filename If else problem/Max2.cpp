// Maximum between two numbers.

#include<iostream> 
using namespace std;

int main()
{
    int num1, num2, max;
    cout<< "Enter two numbers: ";
    cin>> num1 >> num2;

    // if(num1 > num2)
    // {
    //     max = num1;
    // }
    // else
    // {
    //     max = num2;
    // }
    max = (num1 > num2) ? num1 : num2;
    cout<< "Maximum is: " << max << endl;
}