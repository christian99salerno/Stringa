#include "stringa.hpp"
#include<string.h>

Stringa::Stringa(){
  this->s=new char[1];
  this->s[0]='\0';
}

Stringa::Stringa(int c){
  c.set();
}

Stringa::Stringa(char b[]){
  this->s=NULL;
  b.set();
}

Stringa::~Stringa()
{
  if (this->s!=NULL) delete s;
}

void set(const int c){
  this->s=new char[2];
  this->s[0]=c;
  this->s[1]='\0';
}

void set(const char* b){
  size=strlen(b);
  if (this->s!=NULL) delete s;
  this->s=new char[size];
  strncpy(this->s, b, size);
  this->s[size]='\0';
}

char* get(){
return this->s;
}

