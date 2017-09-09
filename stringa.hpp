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
  int indexOf(int c);
  int indexOf_2(int c_2, int index);
};
#endif
