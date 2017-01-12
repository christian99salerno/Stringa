#include "stringa.hpp"
#include<string.h>

Stringa::Stringa(){
  s[0]='\0';
}

Stringa::Stringa(int c){
  this->s[0]=c;
  this->s[1]='\0';
}

Stringa::Stringa(char b[]){
  strncpy(this->s, b, string_size);
  this->s[string_size-1]='\0';
}

char* Stringa::get(){
return s;
}

