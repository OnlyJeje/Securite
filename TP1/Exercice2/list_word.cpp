#include "include.h"
#include <list>
#include <fstream>

void getListfromFile(std::string path, std::list<std::string> &list)
{
  std::string word;
  std::ifstream file;
  file.open(path);
  
  if (file.is_open()){
    while (!file.eof())
      {
	file >> word;
	list.push_back(word);
      }
  }
 file.close(); 
}

void	getList(std::list<std::string> &list_word, std::list<std::string> &list_md5)
{
  std::string word;
  std::ifstream file;
  file.open("mots-8-et-moins.txt");
 

  if (file.is_open()){
    while (!file.eof())
      {
  	file >> word;
  	list_word.push_back(word);
      }
  }
  for(auto test: list_word)
      list_md5.push_back(stringToMD5(test));
    file.close();
}

void	display_list_md5(std::list<std::string> list)
{
   for (auto elem : list)
     std::cout << elem << std::endl;
}
