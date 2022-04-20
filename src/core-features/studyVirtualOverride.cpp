#include "studyVirtualOverride.h"
#include <iostream>

void Derived2::bar() 
{
  std::cout<<"Derived2::bar()" <<" final declared"<<std::endl;
}


void Derived3::bar() 
{
  std::cout<<"Derived3::bar()"<< " Derived3 class declared final"<<std::endl;
}