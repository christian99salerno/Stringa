#ifndef STRINGA_HPP
#define STRINGA_HPP

class Stringa {
  private:
  char* s;
  
  public:
  Stringa();
  Stringa(int c);
  Stringa(char b[]);
  Stringa();
  set(const int* c);
  set(const char* b);
  char* get();
};
#endif
