#include <string.h>
#include "stringa.hpp"

Stringa::Stringa()
{
  s = new char[1];
  s[0] = '\0';
}

Stringa::Stringa(int c)
{
  s = NULL;

  this->set(c);
}

Stringa::Stringa(const char b[])
{
  s = NULL;

  this->set(b);
}

Stringa::~Stringa()
{
  if (s!=NULL) delete[] s;
}

void Stringa::set(const int c)
{
  if (s!=NULL) delete[] s;
  s = new char[2];
  s[0] = c;
  s[1] = '\0';
}

void Stringa::set(const char* b)
{
  int size = strlen(b);

  if (s!=NULL) delete[] s;
  s = new char[size];
  strncpy(s, b, size);
  s[size] = '\0';
}

char* Stringa::get()
{
  return s;
}
