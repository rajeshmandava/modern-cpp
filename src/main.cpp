#include "core-features/useAuto.h"
#include "core-features/studyVirtualOverride.h"
#include "core-features/uniformInitialization.h"
#include <iostream>

int main()
{
  // Derived1 derived1Obj;
  // Derived2 derived2Obj;
  // derived2Obj.bar();
  // Derived3 derived3Obj;
  uniformInitialization obj;
  // obj.builtInTypes();
  // obj.arrays();
  obj.fun({1,2,3}); //using initializer_list for overloading a function
  obj.fun(5,6,7);
  
  
}

// $ docker run -it devcafe/cmake-cookbook_ubuntu-18.04
// $ git clone https://github.com/dev-cafe/cmake-cookbook.git
// $ cd cmake-cookbook
// $ pipenv install --three
// $ pipenv run python testing/collect_tests.py 'chapter-*/recipe-*'

