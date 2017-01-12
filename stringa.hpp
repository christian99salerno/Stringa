#ifndef STRINGA_HPP
#define STRINGA_HPP

#define string_size 80

class Stringa {
  private:
  char s[string_size];
  
  public:
  Stringa();
  Stringa(int c);
  Stringa(char b[]);
  char* get();
}
#endif
