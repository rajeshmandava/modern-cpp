#include "core-features/useAuto.h"
#include <iostream>

int main()
{
  useAuto autoObj;
  auto v =10;
  // autoObj.constAuto(v); auto in params doesn't work in C++20 clang compiler in mac.
}

// $ docker run -it devcafe/cmake-cookbook_ubuntu-18.04
// $ git clone https://github.com/dev-cafe/cmake-cookbook.git
// $ cd cmake-cookbook
// $ pipenv install --three
// $ pipenv run python testing/collect_tests.py 'chapter-*/recipe-*'

