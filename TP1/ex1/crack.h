#ifndef CRACK_H_
#define CRACK_H_

#include <string>
#include <iostream>

class Crack
{
 private:
  std::string code;
  std::string decode;
  int	key;

 public:
  Crack();
  ~Crack();

  void defKey();
  void crackCode();
  void printResult();
};

#endif
