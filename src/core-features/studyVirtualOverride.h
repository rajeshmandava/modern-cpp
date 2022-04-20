#include <iostream>


class Derived1
{
public:
  virtual void foo() 
  {}
  virtual void bar() = 0;
  virtual void fooBar()
  {} 
  virtual ~Derived1 (){}
};

class Derived2 : public Derived1
{
public:
  Derived2(){}
  virtual void bar() final;
  virtual void foo() {}
  virtual void fooBar() {}
 };

class Derived3 final : public Derived1
{
public:
Derived3(){}
  virtual void bar() ;
  virtual void foo() {}
  virtual void fooBar() {}
  ~Derived3(){}
};