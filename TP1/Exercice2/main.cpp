#include "include.h"

void	display_word(std::list<std::string> list, int i)
{
  int	j = 0;
  
  for (auto elem : list)
    {
    if (j == i)
      std::cout << "Le mot de passe est: " << elem <<" (" << stringToMD5(elem)  << ")" << std::endl;
    j++;
    }
}

int	main(int ac, char **av)
{
   std::list<std::string> list_word;
   std::list<std::string> list_md5;  
   std::list<std::string> list_to_crack;

   int	i = 0;
   getList(list_word, list_md5);
   getListfromFile("md5-to-crack.txt", list_to_crack);
   for (auto elem_list : list_md5)
     {
       for (auto el : list_to_crack)
	 if (elem_list == el)
	   {
	     std::cout << el << " -> ";
	     display_word(list_word, i);
	   }
       i++;
     }
}
