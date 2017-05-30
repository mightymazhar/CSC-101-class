#include <iostream>
using namespace std;

int main()
{
    char samplechar;
    cout << "Enter any character" << endl;
    cin >> samplechar;


    if (samplechar >= 'A' && samplechar<= 'Z')
    {
        cout << "Uppercase letter" << endl;
    }
    else if (samplechar >= 'a' && samplechar<= 'z')
    {
        cout << "lowercase letter" << endl;
    }
    else if (samplechar >= '0' && samplechar<= '9')
    {
        cout << "Number" << endl;
    }
    else
    {
        cout << "Invalid output" << endl;
    }

    return 0;
}

