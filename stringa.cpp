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

  // ERRORE: chi e' il soggetto?
  // s.set(c);
  this->set(c);
}

//Stringa::Stringa(char b[])
Stringa::Stringa(const char b[])
{
  s = NULL;

  // ERRORE: come prima
  // s.set(b);
  this->set(b);
}

Stringa::~Stringa()
{
  // s e' un vettore, come si fa il delete?
  //if (s!=NULL) delete s;
  if (s!=NULL) delete[] s;
}

//void set(const int c)
void Stringa::set(const int c)
{
  // come prima
  // if (s!=NULL) delete s;
  if (s!=NULL) delete[] s;
  s = new char[2];
  s[0] = c;
  s[1] = '\0';
}

//void set(const char* b)
void Stringa::set(const char* b)
{
  //size = strlen(b);
  int size = strlen(b);

  // come prima
  //if (s!=NULL) delete s;
  if (s!=NULL) delete[] s;
  s = new char[size];
  strncpy(s, b, size);
  s[size] = '\0';
}

//char* get()
char* Stringa::get()
{
  return s;
}
