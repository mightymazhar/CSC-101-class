# CSC-101-class
CSC 101 class codes n notes

#include <iostream>
using namespace std;

int main()
{
    char samplechar;
    cin >> samplechar;

    if (samplechar >= 'A' && samplechar<= 'z')
    {
        cout << "Value is between A to Z" << endl;
    }
    else
    {
        cout << "Invalid output" << endl;
    }

    return 0;
}

