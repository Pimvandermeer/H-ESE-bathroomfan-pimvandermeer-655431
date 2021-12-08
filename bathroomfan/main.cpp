#include <iostream>

#include "fancontext.h"


void ClientCode() {
  FanContext *fancontext = new FanContext(new IdleFanState);
  fancontext->Request1();
  fancontext->Request1();
  fancontext->Request2();
  delete fancontext;
}

int main()
{
    while (1)
    {
        ClientCode();
    };

    return 0;
}
