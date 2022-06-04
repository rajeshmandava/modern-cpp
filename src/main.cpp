#include "core-features/useAuto.h"
#include "core-features/studyVirtualOverride.h"
#include "core-features/uniformInitialization.h"
// #include "core-features/rangeBasedFor.h"
#include "algorithm/sort_stableSort.cpp"
// #include <iostream>

int main()
{
  // Derived1 derived1Obj;
  // Derived2 derived2Obj;
  // derived2Obj.bar();
  // Derived3 derived3Obj;
  // uniformInitialization obj;
  // obj.builtInTypes();
  // obj.arrays();
  // obj.fun({1,2,3}); //using initializer_list for overloading a function
  // obj.fun(5,6,7);
  // RangeBasedFor obj;
  // std::multimap<int, bool> ans = obj.getRates2();
  // for(auto a:ans)
    // std::cout<<a.first<<" "<<a.second<<std::endl;
// 
  // auto iv = obj.getRates();
  // for(auto a:iv)
    // std::cout<<a<<" ";
  // std::cout<<std::endl;

  //compiler deducing the return types in ranged based for
  // std::cout<<"Compiler deducing the types"<<std::endl;
  // for(auto&& a:obj.getRates())
   {
    // std::cout<<a<<" ";

   }
  //  std::cout<<std::endl;
  //  std::cout<<"in C++17 Structured binding and decomposition delcaration"<<std::endl;
  //  for(auto&& [rate, flag]:obj.getRates2())
    // std::cout<<rate<<" "<<flag<<std::endl;


    create_vector();
}

// $ docker run -it devcafe/cmake-cookbook_ubuntu-18.04
// $ git clone https://github.com/dev-cafe/cmake-cookbook.git
// $ cd cmake-cookbook
// $ pipenv install --three
// $ pipenv run python testing/collect_tests.py 'chapter-*/recipe-*'

