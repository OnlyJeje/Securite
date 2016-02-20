#include "include.h"

#include <openssl/md5.h>

std::string stringToMD5(std::string str)
{
  std::string result;  
  unsigned char buffer[MD5_DIGEST_LENGTH];
  MD5((unsigned char*)str.c_str(), str.length(), buffer);

  char buf[32];
  for (int i = 0; i < 16; i++)
    {
      sprintf(buf, "%02x", buffer[i]);
      result.append(buf);
    }
  
  return result;
}
