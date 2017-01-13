#ifndef STRINGA_HPP
#define STRINGA_HPP

class Stringa {
  private:
  char* s;
  
  public:
  Stringa();
  Stringa(int c);
  Stringa(char b[]);

  // il distruttore, ci vuole ~
  ~Stringa();

  // perche' metti un puntatore qui? e' solo un carattere
  set(const int* c);

  // qui va bene perche' e' una stringa
  set(const char* b);
  char* get();
};
#endif
