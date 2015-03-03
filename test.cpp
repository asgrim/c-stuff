#include <iostream>
#include <string>

#define HELLO_STR "Hello"

using namespace std;

int main()
{
  const string hello = HELLO_STR " world!";

  cout << hello << endl;

  return 0;
}
