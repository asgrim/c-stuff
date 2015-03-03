#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

template <class T>
inline T perform_addition (T, T);

int main()
{
  string buf;
  int a = 3, b = 5;
  double c = 5.3, d = 1.6;

  cout << "The first result is: " << perform_addition(a, b) << endl;
  cout << "The second result is: " << perform_addition(c, d) << endl;

  return 0;
}

template <class T>
inline T perform_addition (T a, T b)
{
  T result;
  result = a + b;
  return result;
}
