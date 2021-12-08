#include <iostream>

#include "fancontext.h"

void FanClientCode()
{
  FanContext *fancontext = new FanContext(new InitFanState);
  fancontext->Request1();
  fancontext->Request1();
  fancontext->Request2();
  delete fancontext;
}

int main()
{
  while (1)
  {
    FanClientCode();
  };

  return 0;
}
