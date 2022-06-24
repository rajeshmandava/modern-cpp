#include<iostream>
#include<initializer_list>
class foo;
class uniformInitialization{
public:

  void builtInTypes();
  void userDefinedTypes();
  void arrays();
  void dynamicArrays();
  void standardContainers();
  void userDefinedPODTypes();
  void fun(int a,int b, int c);

  void fun(std::initializer_list<int> const list);
protected:
private:
int var1;
std::string str;
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
