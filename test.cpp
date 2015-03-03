#include <iostream>
#include <stdint.h>

using namespace std;

enum Colour {red, green, blue};

struct item {
  double price;
  int qty;
  Colour colour;
};

int main()
{
  item f;

  f.price = 5.99;
  f.qty = 3;
  f.colour = green;

  cout << "The total price for " << f.colour << " items is " << (f.qty * f.price) << "\n";

  return 0;
}

