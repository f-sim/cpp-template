#include <cstdlib>
#include <iostream>
#include "Addition.h"

int main(int argc, char** argv)
{
  Addition add(atoi(argv[1]), atoi(argv[2]));
  std::cout << add.GetResult();
}
