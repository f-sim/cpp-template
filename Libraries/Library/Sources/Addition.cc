#include "Addition.h"

Addition::Addition(int a, int b) : mA(a), mB(b) {}

int Addition::GetResult()
{
  return mA + mB;
}