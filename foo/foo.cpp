#include <foo/foo.hpp>

#include <iostream> // std::cout

namespace foo
{

void foo::Run()
{
  std::cout << "foo::Run" << std::endl;
}

} // namespace foo
