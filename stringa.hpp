#ifndef STRINGA_HPP
#define STRINGA_HPP

class Stringa {
  private:
  char* s;

  public:
  Stringa();
  Stringa(int c);

  //Stringa(char b[]);
  Stringa(const char b[]);

  ~Stringa();

  void set(const int c);
  void set(const char* b);
  char* get();
};
#endif
