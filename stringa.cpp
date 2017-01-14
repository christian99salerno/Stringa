#include "stringa.hpp"
#include<string.h>

Stringa::Stringa(){
  s=new char[1];
  s[0]='\0';
}

Stringa::Stringa(int c){
  s=NULL;
  s.set(c);
}

Stringa::Stringa(char b[]){
  s=NULL;
  s.set(b);
}

Stringa::~Stringa()
{
  if (s!=NULL) delete s;
}

void set(const int c){
  if (s!=NULL) delete s;
  s=new char[2];
  s[0]=c;
  s[1]='\0';
}

void set(const char* b){
  size=strlen(b);
  if (s!=NULL) delete s;
  s=new char[size];
  strncpy(s, b, size);
  s[size]='\0';
}

char* get(){
return s;
}

