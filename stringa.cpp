#include "stringa.hpp"
#include<string.h>

Stringa::Stringa(){
  this->s=new char[1];
  this->s[0]='\0';
}

Stringa::Stringa(int c){
  // qui la funzione set() la devi chiamare!!! non riscrivere
  //set(const int* c);
  set(c);
}

Stringa::Stringa(char b[]){
  // come prima, devi chiamare!!!
  //set(const char* b);
  this->s=NULL;
  set(b);
}

// distruttore
Stringa::~Stringa()
{
  if (this->s!=NULL) delete s;
}

// il puntatore!
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

