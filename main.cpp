#include <iostream>

#include "stringa.hpp"

using namespace std;

int main()
{
  Stringa str;
  Stringa lettera('S');
  Stringa frase("Come state?");

  cout << lettera.get() << endl;
  cout << frase.get() << endl;
  cout << frase.indexOf('C') << endl;
  return 0;
}
