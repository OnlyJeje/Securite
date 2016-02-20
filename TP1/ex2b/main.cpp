#include <iostream>
#include <string>
#include <openssl/md5.h>
#include "enumerator.h"
#include "include.h"

bool	compare(std::string check_md5[5], std::string str)
{
  for (int i = 0; i < 5; i++)
    {
      if (check_md5[i] == str)
	return (true);
    }
  return (false);
}

int	main()
{
  Enumerator test;
  std::string tmp;
  std::string trash;
  std::string check_md5[5];
  std::string mdp[5];
  int	x;
  
  tmp.clear();
  check_md5[0] = "c649e84f0acf6cf7052ccd7490a89d16";
  check_md5[1] = "563a5d12e771f3086f33245fef49b727";
  check_md5[2] = "d9c44e7cd7eb16fe6c7cfe5d9cb18b85";
  check_md5[3] = "4b192075f38695083071406ff5143789";
  check_md5[4] = "c6eb8a0067d2cf599fd42412b745bcd3";
  x = 0;  
  while (mdp[4].empty() && test.getState() != 43)
    {
      tmp = test.Roll();
      if (compare(check_md5,stringToMD5(tmp)))
	 {
	   mdp[x] = tmp;
	   std::cout << "mdp: " << tmp << " (In md5: " << stringToMD5(tmp) << ")" << std::endl;
	   x++;
	 }
    }
}
