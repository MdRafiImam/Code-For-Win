// Maximum between three numbers.

#include<iostream> 
using namespace std;

int main()
{
    int num1, num2, num3, max;
    cout<< "Enter three numbers: ";
    cin>> num1>> num2>> num3;

    if(num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    cout<< "Maximum is: " << max << endl;
}