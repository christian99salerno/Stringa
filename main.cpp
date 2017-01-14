#include <stdio.h>
#include "stringa.hpp"

// questo si mette qui e senza parentesi ()
using namespace std;

int main()
{
  Stringa str;
  Stringa lettera('S');
  Stringa frase("Come state?");

  cout << lettera.get() << endl;
  cout << frase.get() << endl;

  return 0;
}
