#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>



std::string s("hello");
    // std::transform(s.begin(), s.end(), s.begin(),
    //                [](unsigned char c) -> unsigned char { return std::toupper(c); });
class RangeBasedFor{
public:
  RangeBasedFor(){}

  std::vector<int> getRates();
  std::multimap<int, bool> getRates2();
};
