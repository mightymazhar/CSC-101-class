using namespace std;

int main()
{
    srand(5000);

    const int arrsize = 10;
    int a[arrsize];
    float sum = 0;
    int ul = 0;
    int ll = a[arrsize];

    for(int i = 0; i < arrsize; i++)
    {
        a[i] = 1+rand()%10;
        sum += a[i];
        if(ul < a[i])
        {
            ul = a[i];
        }
        if (ll > a[i])
        {
            ll = a[i];
        }

        cout << i << "  -----  " << a[i] << endl << endl;


    }
    cout << endl << "Average is " << sum/10 << endl;
    cout << endl << "Largest is: " << ul << endl;
    cout << endl << "Smallest is: " << ll << endl;

    return 0;
}


