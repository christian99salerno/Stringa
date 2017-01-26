#include <iostream>

#include "stringa.hpp"

using namespace std;

int main()
{
  Stringa frase("Hello World!!!");

  cout << frase.get() << endl;
  cout << frase.indexOf('e') << endl;
  cout << frase.indexOf_2('o', 6) << endl;
  return 0;
}
