#include <iostream>

#include "fancontext.h"
#include "log.h"
#include "../display/appinfo.h"

void FanClientCode(int *minutes)
{
  FanContext *fancontext = new FanContext(new InitFanState, *minutes);
  fancontext->Config();
  fancontext->Start();
  fancontext->Run();
  fancontext->Error();

  delete fancontext;
}

int main()
{
  LogManager logger;
  logger.initialize();

  int Minutes = 10;

  STATE_INFO("We started the {} and are now at version {}\n\n", APP, VERSION);

  while (1)
  {
    FanClientCode(&Minutes);
  };

  logger.shutdown();

  return 0;
}
