#include <iostream>

#include "fancontext.h"
#include "log.h"
#include "../display/appinfo.h"

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
  LogManager logger;
  logger.initialize();
  STATE_INFO("We started the {} and are now at version {}\n\n", APP, VERSION);

  while (1)
  {
    FanClientCode();
  };
  logger.shutdown();

  return 0;
}
