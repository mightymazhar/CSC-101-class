#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, sum, digit, val;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        val = i;
        sum = 0;
        while(val != 0)
        {
            digit = val % 10;
            sum = sum +(digit*digit*digit);
            val = val / 10;

        }
        if(sum == i)cout<< i << endl;
    }


    return 0;
    }
