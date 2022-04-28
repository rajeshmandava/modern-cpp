#include "rangeBasedFor.h"
#include <iostream>

std::vector<int> RangeBasedFor::getRates()
{
  return std::vector<int> {1,2,3,4,5,6};
}

std::multimap<int, bool> RangeBasedFor::getRates2()
{
  return std::multimap<int, bool> {{1, true},
                                   {2, false},
                                   {3, true},
                                   {4, false},
                                   {5, true}};
}