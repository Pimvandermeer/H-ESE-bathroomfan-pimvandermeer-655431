#include <iostream>

#include "fancontext.h"

void FanClientCode()
{
  FanContext *fancontext = new FanContext(new InitFanState);
  fancontext->Start();
  fancontext->Run();
 // fancontext->Error();

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
