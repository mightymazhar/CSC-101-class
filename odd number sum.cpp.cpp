#include <iostream>

using namespace std;

int main()

{
  float sum = 1;

  for (int i = 1; i <= 99; i+=2)
  {
      cout << i;
      if (i != 99)
        cout << "+";
      sum += i;
  }
  cout << " = " << sum;



  return 0;
}

