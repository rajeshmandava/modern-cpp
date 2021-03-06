#include "uniformInitialization.h"
#include <iostream>
#include <span>
#include <vector>
#include <string>
#include <map>

void uniformInitialization::builtInTypes()
{
  int i{10};
  char ch{'A'};
  double d{10.34};
  float f{10.7};

  const char* s{"This is string"};
  const char* sCopy{s};
  std::string str{sCopy};

  std::cout<<i<<" "<<ch<<" "<<d<<" "<<" "<<f<<std::endl;
  std::cout<<"const char*: "<<s<<std::endl;
  std::cout<<"const char* copy using uniform initialization :"<<sCopy<<std::endl;
  std::cout<<"std::string copied from const char* using uniform initialization : "<<str<<std::endl;
}

void uniformInitialization::arrays()
{

  //uniform initialization initializes elements to zero if no values were given in initialization list
  // below examples are called direct list initialization
  int arr[]{1,2,3,4,5};
  int arr1[10]{0};
  for(auto a:arr)
    std::cout<<a<<" ";
  std::cout<<std::endl;
  for(auto a:arr1)
    std::cout<<a<<" ";
  std::cout<<std::endl;

  int arr2[5]{0,1};
  for(auto a:arr2)
    std::cout<<a<<" ";
  std::cout<<std::endl;

  int arr3[6]{};
  for(auto a:arr3)
    std::cout<<a<<" ";
  std::cout<<std::endl;

  // int arr4{arr}; A value of type  {int*} cannot be used initialize an empty type of int 

}

void uniformInitialization::dynamicArrays()
{

  //using std::span() C++20 feature to iterate on a dynamic array

  // int* arr = new int[5]{1};
  // for(auto a: std::span(arr,5))
  //   std::cout<<a<<" ";
  // std::cout<<std::endl;

  // int* arr1[2] = new[] int[2]{1};

  // delete arr;
}

void uniformInitialization::standardContainers()
{
  std::vector<int> ivec{1,2,3};
  std::map<std::string, int> myMap{{"id",1},{"id2",2}};

  for(auto i:ivec)
    std::cout<<i<<" ";
  std::cout<<std::endl;

  for(auto &i:myMap)
    std::cout<<i.first<<" "<<i.second<<std::endl;
    std::cout<<std::endl;
}

void uniformInitialization::userDefinedTypes()
{
  foo obj;
  foo ob2(1,1.2);
  obj.print();
  ob2.print();
}

void uniformInitialization::fun(int a, int b, int c)
{
  std::cout<<"using regular parameters"<<std::endl;
  std::cout<<a<<" "<<b<<" "<<c<<std::endl;
}

void uniformInitialization::fun(std::initializer_list<int> const list)
{
  std::cout<<"using initializer_list"<<std::endl;
  for(auto i:list)
    std::cout<<i<<" ";
  std::cout<<std::endl;
}






