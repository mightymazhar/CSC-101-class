#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int sum = 0;
    for (int i = 0; i< 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i< 5; i++)
    {
        cout << " " << a[i];
        sum = sum + a[i];
    }
    cout << endl << "sum = " << sum;




    return 0;
}
