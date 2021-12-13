#include "display.h"

//---------------------------------------------------------------------- DiSPlay

#define DSP_HEIGHT 14 ///< The number of available display rows
#define DSP_WIDTH 70  ///< The number of available display columns

static char display[DSP_HEIGHT][DSP_WIDTH + 1] = {{0}};
static char topDisplay[DSP_WIDTH] = {0};

//debug boolean
bool debug = 0;

void Display::DSPinitialise(void)
{
   for (int i = 0; i < DSP_WIDTH; i++)
   {
      topDisplay[i] = '=';
   }
   strncpy(display[0], topDisplay, DSP_WIDTH);
   strncpy(display[DSP_HEIGHT - 1], topDisplay, DSP_WIDTH);
   for (int i = 1; i < DSP_HEIGHT - 1; i++)
   {
      display[i][0] = '|';
   }
   strncpy(&display[1][1], " " APP " v" VERSION, DSP_WIDTH - 5);

   DSPshowDisplay();
   Devconsole::DCSdebugSystemInfo("Display %dx%d: initialised", DSP_WIDTH, DSP_HEIGHT);
}

void Display::DSPclear(void)
{
   if (!system(NULL))
   {
      printf("\nERROR command processor is not available\n\n");
      exit(EXIT_FAILURE); //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   }

    #ifdef __APPLE__
      int error = system("clear"); // Execute MAC OSX clear command
    #endif
    #ifdef _WIN32
       int error = system("cls"); // Execute WIN32 cls command
    #endif
    #ifdef __linux__
       int error = system("clear"); // Execute Linux clear command
    #endif

   if (error != 0)
   {
      printf("\nERROR command for starting a terminal fails\n\n");
   }
}

void Display::DSPclearLine(int row)
{
   strcpy(display[row], "| ");
}

void Display::DSPshowDisplay(void)
{
   Display::DSPclear();
   for (int row = 0; row < DSP_HEIGHT; row++)
   {
      printf("%s\n", display[row]);
   }
   puts("\nDevelopment Console:");
}

void Display::DSPshow(int row, const char fmt[], ...)
{
   va_list arg;

   if (debug)
   {
      Devconsole::DCSdebugSystemInfo("** Press <Enter>, for update display **");
      getchar();
   }

   Display::DSPclearLine(row);

   va_start(arg, fmt);
   vsnprintf(&display[row][2], DSP_WIDTH - 3, fmt, arg);
   va_end(arg);

   Display::DSPshowDisplay();
}

void Display::DSPshowDelete(int row, const char fmt[], ...)
{
   va_list arg;

   if (debug)
   {
      Devconsole::DCSdebugSystemInfo("** Press <Enter>, for update display **");
      getchar();
   }
   for (int r = row; r < DSP_HEIGHT - 1; r++)
   {
      Display::DSPclearLine(r);
   }
   va_start(arg, fmt);
   vsnprintf(&display[row][2], DSP_WIDTH - 3, fmt, arg);
   va_end(arg);

   Display::DSPshowDisplay();
}

void Display::deactivateDebug()
{
   std::cout << " Ik ben hier gekomen" << std::endl;
   debug = 1;
}
