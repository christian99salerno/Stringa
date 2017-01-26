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

int Stringa::indexOf(int c)
{
  using namespace std;
  int i;
  int size=strlen(s);
  
  for(i=0;i<size;i++){
    if(s[i]==c){ 
    cout<<"Il carattere e' in posizione: ";
    return i;
    }
     }
  return -1;
}

int Stringa::indexOf_2(int c_2, int index){
  using namespace std;
  int i;
  int size=strlen(s);
  
  for(i=index;i<size;i++){
    if(s[i]==c_2){ 
    cout<<"Il carattere e' in posizione: ";
    return i;
    }
     }
  return -1;
}
