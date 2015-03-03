#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{
  int v, w;
  int *ptr = &v;

  *ptr = 15;
  ptr = &w;
  *ptr = 10;

  cout << "V is " << v << endl;
  cout << "W is " << w << endl;

  return 0;
}

