#include <string.h>
#include "stringa.hpp"
#include <iostream>

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

void Stringa::set(int c)
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
  s = new char[size+1];
  strncpy(s, b, size);
  s[size] = '\0';
}

char* Stringa::get()
{
  return s;
}

int Stringa::indexOf()
{
  using namespace std;
  char car;
  int i;
  int size=strlen(s);
  int cont=0;
  
  cout<<"Inserisci il carattere da ricercare nella stringa ";
  cin>>car;

  for(i=0;i<size;i++){
    if(s[i]==car){ 
    cont++;
    cout<<"Il carattere e' in posizione: "<<i<<endl;
    }
     }
  
  cout<<"Il numero di volte in cui e' presente e' ";
  return cont;
}
