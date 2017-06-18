#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for ( int j = 1; j<= i/2; j++)
        {
            if(i%j==0)sum=sum+j;
        }
        if(i==sum)cout<<i<<endl;

    }

    return 0;
}
