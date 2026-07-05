#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string makeUpperCase(const std::string& str) {
  std::string dest{str};

  auto str_upper = [](const unsigned char& c)->unsigned char{
    return static_cast<unsigned char>(std::toupper(c));
  };

  std::transform(str.begin(), str.end(), dest.begin(), str_upper);
  return dest;
}

/*
std::string makeUpperCase(const std::string& str) {
  std::string dest{str};
  std::transform(str.begin(), str.end(), dest.begin(), ::toupper);
  return dest;
}
*/

int main()
{
    //std::cout<<"Hello World";
    std::string str = "himanshu";
    auto result = makeUpperCase(str);
    std::cout << "result:" << result;
    return 0;
}
