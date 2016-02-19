#include "crack.h"

Crack::Crack()
{
  code="HWTXHIDLWOHVDLQWGDQVOHVERLVGHPDQGDCDUDWKRXVWUD";
  decode.clear();
  key = 0;
}

Crack::~Crack()
{
  code.clear();
  decode.clear();
  key = 0;
}

void		Crack::defKey()
{
  std::string tmp;

  std::cout << "Entrez la clé avec laquelle vous souhaitez tenté de déchiffrer le code:" << std::endl << ">";
  std::cin >> tmp;

  this->key = std::stoi(tmp);
  std::cout << "la clé choisie est: " << this->key << std::endl;
}

void		Crack::crackCode()
{
  char tmp;
  for (unsigned int i = 0; i < this->code.length(); i++)
    {
      tmp = this->code[i] - key;
      if (tmp < 'A')
	this->decode.push_back(tmp + 26);
      else
	this->decode.push_back(tmp);
    }
}

void		Crack::printResult()
{
  std::cout << this->decode << std::endl;
}
