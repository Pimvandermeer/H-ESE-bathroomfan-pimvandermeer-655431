#include "devconsole.h"

using namespace Devconsole;

//initialiseren van keyboard object
Keyboard keyboard;

void Devconsole::DCSinitialise(void)
{
   keyboard.KYBinitialise();
//   Devconsole::DCSdebugSystemInfo("Development Console: initialised");
}

bool Devconsole::DCSsimulationSystemInputYN(const char questionText[])
{
   char input = '\0';
   int again = 0;

   do
   {
       SENS_INFO("-- SIMULATION  {} [y/n]?", questionText);
   //   printf("\n-- SIMULATION  %s [y/n]? ", questionText);

      int nOK = scanf(" %c", &input);

      input = toupper(input);

      again = (nOK != 1 || (strchr("YN", input) == NULL));
      if (again)
      {
         printf("** AGAIN");
      }
      keyboard.KYBclear();
   } while (again);

   return (input == 'Y');
}

char Devconsole::DCSsimulationSystemInputChar(const char text[], const char chrs[])
{
   char input = '\0';
   int again = 0;

   do
   {
      int nOK = DCSsimulationSystemInput(text, " %c", &input);
      again = (nOK != 1 || (strchr(chrs, input) == NULL));
      if (again)
      {
         printf("** AGAIN");
      }
      keyboard.KYBclear();
   } while (again);

   return input;
}

double Devconsole::DCSsimulationSystemInputDouble(const char text[], double min, double max)
{
   double input = 0.0;
   double again = 0.0;

   do
   {
      double nOK = DCSsimulationSystemInput(text, "%lf", &input);
      again = (nOK != 1 || (input < min || input > max));
      if (again)
      {
         printf("** AGAIN  %f <= input <= %f ", min, max);
      }
      keyboard.KYBclear();
   } while (again);

   return input;
}

int Devconsole::DCSsimulationSystemInputInteger(const char text[], int min, int max)
{
   int input = 0;
   int again = 0;

   do
   {
      int nOK = DCSsimulationSystemInput(text, "%d", &input);
      again = (nOK != 1 || (input < min || input > max));
      if (again)
      {
         printf("** AGAIN  %d <= input <= %d ", min, max);
      }
      //   KYBclear();
   } while (again);

   return input;
}

int Devconsole::DCSsimulationSystemInput(const char text[], const char fmt[], ...)
{
   int nArgsOK = 0;
   va_list arg;

    SENS_DEBUG("SIMULATION {}", text);
//   printf("\n-- SIMULATION  %s ", text);
   va_start(arg, fmt);
   nArgsOK = vfscanf(stdin, fmt, arg);
   va_end(arg);

   return nArgsOK;
}

void Devconsole::DCSdebugSystemInfo(const char fmt[], ...)
{
   va_list arg;

   SENS_DEBUG("--DEBUG");
//   printf("\n-- DEBUG  ");
   va_start(arg, fmt);
   vfprintf(stdout, fmt, arg);
   va_end(arg);
}

void Devconsole::DCSsimulationSystemInfo(const char fmt[], ...)
{
   va_list arg;

   SENS_DEBUG("---SIMULATION");
//   printf("\n-- SIMULATION  ");
   va_start(arg, fmt);
   vfprintf(stdout, fmt, arg);
   va_end(arg);
}

void DCSshowSystemError(const char fmt[], ...)
{
   va_list arg;

   SENS_ERROR(" --SYSTEM ERROR");
 //  printf("\n-- SYSTEM ERROR  ");
   va_start(arg, fmt);
   vfprintf(stdout, fmt, arg);
   va_end(arg);
}
