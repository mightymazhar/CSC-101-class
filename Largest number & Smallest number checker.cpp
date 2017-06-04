#include <iostream>

using namespace std;

int main()

{
  float value, largest, smallest;
  for(int i = 1; i <=10; i++)
  {
      cout <<"Enter number " << i << ": ";
      cin >> value;
      if (i == 1)
      {
          largest = value;

      }
      else if (value > largest)
      {
          largest = value;

      }
      if (value < largest)
      {
          smallest = value;
      }

  }
  cout << "Largest = " << largest << "   ";
  cout << "Smallest = " << smallest;

  return 0;
}

