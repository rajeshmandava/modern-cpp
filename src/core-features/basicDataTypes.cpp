#include <iostream>
#include <string>

using namespace std;

void assign();
void closingDown();

struct s{
  public:
int val{20};
void printval()
{
  std::cout<<"val:"<<val<<std::endl;
}
};

class c{
  public:
int val{10};
void printval()
{
  std::cout<<"val:"<<val<<std::endl;
}
};

extern int intData{10};
float floatData;
double doubleData;
std::string str;
char* charPtr{nullptr};



void run() {
  s structObj;
  structObj.printval();

  c cObj;
  cObj.printval();
  assign();
  closingDown();
}

void assign()
{
  // intData = 15;
  // floatData = 3.14;
  // doubleData = 57.4764287628683;
  // str = "This is string";
  // charPtr = new char('a');
  
  // std::cout<<"intData:"<<intData<<std::endl;
  // std::cout<<"floattData:"<<floatData<<std::endl;
  // std::cout<<"doubleData:"<<doubleData<<std::endl;
  // std::cout<<"str:"<<str<<std::endl;
  // std::cout<<"charPtr:"<<charPtr<<std::endl;


  int Data{20};
  doubleData=Data*2;
  floatData=doubleData*2;
  str= "Hello Mounika";
  charPtr=new char('M');
  std::cout<<Data<<std::endl;
  std::cout<<doubleData<<std::endl;
  std::cout<<floatData<<std::endl;
  std::cout<<str<<std::endl;
  std::cout<<charPtr<<std::endl;
  





}

void closingDown()
{
  delete charPtr;
}


