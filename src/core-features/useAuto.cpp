#include "useAuto.h"
#include <string_view>
#include <iostream>

template <typename T>
constexpr auto type_name() {
  std::string_view name, prefix, suffix;
#ifdef __clang__
  name = __PRETTY_FUNCTION__;
  prefix = "auto type_name() [T = ";
  suffix = "]";
#elif defined(__GNUC__)
  name = __PRETTY_FUNCTION__;
  prefix = "constexpr auto type_name() [with T = ";
  suffix = "]";
#elif defined(_MSC_VER)
  name = __FUNCSIG__;
  prefix = "auto __cdecl type_name<";
  suffix = ">(void)";
#endif
  name.remove_prefix(prefix.size());
  name.remove_suffix(suffix.size());
  return name;
}

void useAuto::notCommitSpecificType()
{
  auto iValue = 100;
  auto fValue = 2.3;
  auto myDouble = 2.3;
  auto str = "this is string";

  std::cout<<type_name<decltype(str)>()<<std::endl;
}

void useAuto::constAuto(auto val)
{
  std::cout<<"print const auto val : "<<val<<std::endl;
}

void useAuto::constAuto(int  val)
{
  std::cout<<"print const auto val : "<<val<<std::endl;
}

