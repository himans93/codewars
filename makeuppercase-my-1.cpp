#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

std::string makeUpperCase(const std::string& str) {
  std::string out{str};
  auto upper = [](const char& c )->char 
    { 
      //std::cout << std::hex << c << " " << std::dec;
      std::cout << c << " ";
      if ((c >= 'a') && (c <= 'z')) {
        auto a = c - 32;
        std::cout << a << " ";
        return (a);
       } else {
        return ' ';
      }       
    };
  
  std::string in = str;
  auto itr = std::transform(in.begin(), in.end(), out.begin(), upper);
  return out;
}

int main()
{
    //std::cout<<"Hello World";
    std::string str = "himanshu";
    auto result = makeUpperCase(str);
    std::cout << "result:" << result;
    return 0;
}
