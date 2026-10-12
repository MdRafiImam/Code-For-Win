// Vowel or Consonant

#include<iostream>
using namespace std;

int main()
{
    char alphabet;
    cout<< "Enter a character: ";
    cin>> alphabet;

    switch(alphabet)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<< "Vowel" << endl;
        break;

        default:
        cout<< "Consonant" << endl;
    }
}