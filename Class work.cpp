#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many terms? : " ;
    cin >> n;
    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << "1/" << i << "^2+";
        sum += (float)1/(i*i);
    }
    cout << "\b =";
}
