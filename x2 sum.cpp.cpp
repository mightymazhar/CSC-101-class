#include <iostream>

using namespace std;

int main()

{
  float sum = 1, val;
  cout << 1 << "+";
  val = 2;

  for (int i = 1; i <= 10; i++)
  {
      cout << val << "+";
      sum = sum + val;
      val = val * 2;


  }
  cout << "\b =" << sum;


  return 0;
}

