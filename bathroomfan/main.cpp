#include <iostream>

#include "fancontext.h"

void FanClientCode()
{
  FanContext *fancontext = new FanContext(new InitFanState);
  fancontext->Start();
  fancontext->Run();

 //  std::cout << "print this from client Code" << fancontext->getValue() << std::endl;

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
