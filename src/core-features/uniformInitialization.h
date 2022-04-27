#include<iostream>
class uniformInitialization{
public:

  void builtInTypes();
  void userDefinedTypes();
  void arrays();
  void dynamicArrays();
  void standardContainers();
  void userDefinedPODTypes();
protected:
private:

};

class foo{
private:
  int a;
  double d;
public:
  foo():a(0),d(0.0){}
  foo(int i, double d1):a(i),d(d1){}
  void print()
  {
    std::cout<<a<<" "<<d<<std::endl;
  }

};
