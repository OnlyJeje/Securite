#include <openssl/md5.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <fstream>


std::string stringToMD5(std::string);
void getList(std::list<std::string>& list_word, std::list<std::string>& list_md5);
void display_list_md5(std::list<std::string>);
void getListfromFile(std::string, std::list<std::string>&);
