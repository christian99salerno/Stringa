#ifndef STRINGA_HPP
#define STRINGA_HPP

class Stringa {
  private:
  char* s;

  public:
  Stringa();
  Stringa(int c);

  Stringa(const char b[]);

  ~Stringa();

  void set(int c);
  void set(const char* b);
  char* get();
  int indexOf();
};
#endif
