#include "keyboard.h"

void Keyboard::KYBinitialise(void)
{
   SENS_INFO("Keyboard: initialised");
}

void Keyboard::KYBclear(void)
{
   while ((getchar()) != '\n')
   {
      // Remove all remaining buffered input chars
   }
}

char Keyboard::KYBgetchar(void)
{
   char c = getchar();
   KYBclear();
   return c;
}

int Keyboard::KYBgetint(int ifWrongValue)
{
   int input = 0;
   // scanf reads input buffer until space, tab or enter.
   int nOk = scanf(" %d", &input);

   KYBclear();
   // Check if input is an int (nOk == 1), if not return ifWrongValue
   if (nOk != 1)
   {
      input = ifWrongValue;
   }
   return input;
}

double Keyboard::KYBgetdouble(double ifWrongValue)
{
   double input = 0.0;
   // scanf reads input buffer until space, tab or enter.
   int nOk = scanf(" %lf", &input);

   KYBclear();
   // Check if input is an double (nOk == 1), if not return ifWrongValue
   if (nOk != 1)
   {
      input = ifWrongValue;
   }
   return input;
}
