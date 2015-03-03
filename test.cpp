#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int perform_addition (int a, int b)
{
  return a + b;
}

int main()
{
  string buf;
  int a, b;

  cout << "Please enter a: ";
  getline(cin, buf);
  a = atoi(buf.c_str());
  cout << "Please enter b: ";
  getline(cin, buf);
  b = atoi(buf.c_str());

  cout << "The result is: " << perform_addition(a, b) << endl;

  return 0;
}
