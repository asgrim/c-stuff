#include <iostream>
#include <stdint.h>

using namespace std;

struct item {
  double price;
  int qty;
};

int main()
{
  item f;

  f.price = 5.99;
  f.qty = 3;

  cout << "The total price is " << (f.qty * f.price) << "\n";

  return 0;
}

