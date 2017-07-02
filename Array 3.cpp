#include <iostream>

using namespace std;

int main()
{
    const int s = 5;
    int a[5];
    int sum = 0;
    int evencount = 0;
    for (int i = 0; i< 5; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i <s; i++)
    {
        if (a[i] % 2 == 0) evencount++;

    }

        cout << "Total odd: " << s - evencount << endl;
        cout << "total even: " << evencount;



    return 0;
}
