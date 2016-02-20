#include <iostream>
#include <string>
#include <openssl/md5.h>
#include "enumerator.h"
#include "include.h"

int	main()
{
  Enumerator test;
  std::string tmp;
  std::string mdp;
  
  tmp.clear();
  mdp.clear();
  mdp = "z5c2";
  mdp = stringToMD5(mdp);
  do
    {
      tmp = test.Roll();
    } while (mdp != stringToMD5(tmp));
  std::cout << mdp << " = " << tmp << " ( " << stringToMD5(tmp) << " ) " << std::endl;
}
