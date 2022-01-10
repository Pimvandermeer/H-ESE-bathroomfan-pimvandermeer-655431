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

  int minutes = 0;

  std::cout << "Enter the amount of minutes qou want the Fan to Run" << std::endl;
  std::cin >> minutes;



  STATE_INFO("We started the {} and are now at version {}\n\n", APP, VERSION);

  while (1)
  {
    FanClientCode(&minutes);
  };

  logger.shutdown();

  return 0;
}
