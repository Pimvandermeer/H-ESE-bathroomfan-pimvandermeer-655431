#ifndef FANSTATE_H
#define FANSTATE_H

#include <iostream>
#include "sensor.h"

class FanContext;

/*The fanstate is functioning as a Interface at the different classes
 * this way every state will use this functions but will overide them with there own function
 * and so will properly react to the written event
 */

class FanState
{
protected:
  FanContext *fanContext_;

public:
  FanState();
  virtual ~FanState();

  void setContext(FanContext *fanContext);

  //  virtual int *E_START();
  virtual void E_CONFIG();
  virtual void E_START();
  virtual void E_RUN();
  virtual void E_STOP();
  virtual void E_ERROR();
  virtual void E_FIXED();
};

#endif // FANSTATE_H