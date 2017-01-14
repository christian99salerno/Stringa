#include "stringa.hpp"
#include <string.h>

Stringa::Stringa()
{
  s = new char[1];
  s[0] = '\0';
}

Stringa::Stringa(int c)
{
  s = NULL;

  // ERRORE: chi e' il soggetto?
  s.set(c);
}

Stringa::Stringa(char b[])
{
  s = NULL;

  // ERRORE: come prima
  s.set(b);
}

Stringa::~Stringa()
{
  // s e' un vettore, come si fa il delete?
  if (s!=NULL) delete s;
}

void set(const int c)
{
  // come prima
  if (s!=NULL) delete s;
  s = new char[2];
  s[0] = c;
  s[1] = '\0';
}

void set(const char* b)
{
  size = strlen(b);
  // come prima
  if (s!=NULL) delete s;
  s = new char[size];
  strncpy(s, b, size);
  s[size] = '\0';
}

char* get()
{
  return s;
}

