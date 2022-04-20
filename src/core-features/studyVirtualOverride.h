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

//Notes :
// 1) override : It ensures the function is actually overriding a base class function or else triggers a error
// 2) override and final keywords are special identifiers and have meaning only when used in function declaration or definition
//   They are not reserved keywords and can still be used in program elsewhere as user defined identifiers

class A 
{
public:
  virtual void fun() = 0;
  virtual void checkFun() ;
};

class B : public A
{
public:
  virtual void fun() {}
  virtual void checkFun() override; //checkFun(int) is overloading function not overriding override keyword detects error
};

//usage of final

class B1
{
  virtual void fun() final;
};

class B2 final : public B1
{
  // virtual void fun(){} // overriding final function form base class
};

// class B3 : public B2 // inheriting from the class B2 final class
// {

// };