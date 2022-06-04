#include <algorithm>
#include <vector>
#include <iostream>

void run_sort(std::vector<int>&);
void create_vector()
{
  std::vector<int> iv{2,3,5,1,89,1002,0};
  run_sort(iv);
  for(auto i:iv) std::cout<<i<<" ";
  std::cout<<std::endl;
}

void run_sort(std::vector<int>& v)
{
  std::sort(v.begin(),v.end());
}

