#include <iostream>
#include "fancontext.h"
#include "log.h"
#include "../display/appinfo.h"
#include "../3rdparty/simpleini/SimpleIni.h"

// All explanations about the different classes can be read in the headerfiles

// Forward declerations
void FanClientCode(int *minutes);
int initSettingsFile();

int main()
{
  LogManager logger;
  logger.initialize();

  int minutes = initSettingsFile();

  STATE_INFO("We started the {} and are now at version {}\n\n", APP, VERSION);

  while (1)
  {
    FanClientCode(&minutes);
  };

  logger.shutdown();

  return 0;
}

int initSettingsFile()
{
  // Ini object is made to be able to read settings from the init.ini file and used as the potentio meter
  // this way a engineer can set easily the time the bathroomfan needs to run
  CSimpleIniA ini;
  ini.SetUnicode();
  SI_Error rc = ini.LoadFile("../initfile/init.ini");
  const char *minute;
  if (rc < 0)
  {
    STATE_ERROR("There is no value in the ini file or we cannot read it!\n\n");
    STATE_ERROR("We are going to load a static value");
    minute = "10";
  }
  else
  {
    minute = ini.GetValue("potentio-meter", "minutes");
    STATE_INFO("We have initialised the potentio-meter from the setting file with value {}\n\n", minute)
  }


  int minutes = atoi(minute);

  return minutes;
}

void FanClientCode(int *minutes)
{
  FanContext *fancontext = new FanContext(new InitFanState, *minutes);
  fancontext->Config();
  fancontext->Start();
  fancontext->Run();
  delete fancontext;
}
