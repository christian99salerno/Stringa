#include <iostream>

#include "stringa.hpp"

using namespace std;

int main()
{
  Stringa frase("Hello World!!!");

  cout << frase.get() << endl;
  cout << frase.indexOf() << endl;
  return 0;
}
