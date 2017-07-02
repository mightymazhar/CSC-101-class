#include <iostream>

using namespace std;

int main()
{
    const int s = 5;
    int a[5];
    int sum = 0;
    int largest;
    for (int i = 0; i< 5; i++)
    {
        cin >> a[i];
    }
    largest = a[0];
    for(int i = 1; i <s; i++)
    {
        if (a[i] > largest) largest = a[i];

    }

        cout << "largest: " << largest;



    return 0;
}
