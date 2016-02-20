#include "enumerator.h"

Enumerator::Enumerator()
{
  this->alphabet="eaistnrulodmpcvqgbfjhzxykw0123456789!@#$%&*";
  for (int i = 0; i < 4; i++)
    this->compteur[i] = 0;
}

Enumerator::~Enumerator()
{
  this->alphabet.clear();
  for (int i = 0; i < 4; i++)
    this->compteur[i] = 0;
}

std::string	Enumerator::Roll()
{
  tmp.clear();
  for (int i = 3; i > -1; i--)
    this->tmp.push_back(this->alphabet[compteur[i]]);
  if (this->compteur[3] < 43)
    this->Increment(0);
  return (tmp);
}

void	Enumerator::Increment(int x)
{
  this->compteur[x] = this->compteur[x] + 1;
  if (this->compteur[x] > 42 && x < 3)
    {
      this->compteur[x] = 0;
      this->Increment(x + 1);
    }
}

int	Enumerator::getState()
{
  return (compteur[3]);
}
