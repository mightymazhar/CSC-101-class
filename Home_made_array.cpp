#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a[10];
    int gv = 0;
    int sv = a[10];
    const int array_size = 10;

    for(int b = 0; b <= 10; b++)
    {
        a[b] = 1+(rand()%10);

        cout << b << "  ----- " << a[b] << endl << endl;

        if(a[b] > gv)
        {
            gv = a[b];
        }
        if(a[b] < sv)
        {
            sv = a[b];
        }

    }
    
    for()
    cout << endl << gv << endl;
    cout << endl << sv << endl;





    return 0;
}
