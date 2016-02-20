#ifndef ENUMERATOR_H_
#define ENUMERATOR_H_

#include <string>
#include <iostream>

class Enumerator
{
 private:
  int compteur[4];
  std::string alphabet;
  std::string tmp;

 public:
  Enumerator();
  ~Enumerator();

  std::string	Roll();
  void Increment(int x);
  int	getState();
};

#endif
