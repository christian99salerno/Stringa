#include<stdio.h>
#include "stringa.hpp"

int main(){
   
// NON COSI'
//Stringa() str;  
//Stringa('S') lettera;
//Stringa("Come state?") frase;

  Stringa str;
  Stringa lettera('S');
  Stringa frase("Come state?");

  // std::cout
cout<<lettera.get()<< endl;
cout<<frase.get()<< endl;  

  return 0;
}
