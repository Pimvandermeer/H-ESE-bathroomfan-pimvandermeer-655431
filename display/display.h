#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdarg.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include "appinfo.h"
#include "devconsole.h"
#include "keyboard.h"


/* display is een aparte klasse die van niemand overerft. 
De reden hiervoor is omdat het display niet afhankelijk is 
van andere objecten/onderdelen */


class Display
{
public:
    /// Initialises the Display (DSP) subsystem and draws an empty display
    /// (no text).
    static void DSPinitialise(void);

    /// Clears full display (terminal) by executing a terminal command.
    static void DSPclear(void);

    /// Clears a full line in the display.
    /// \param row display row index [1, DSP_HEIGHT-2]
    /// \pre   0 < row < DSP_HEIGHT-2
    static void DSPclearLine(int row);

    /// Shows full display contents.
    static void DSPshowDisplay(void);

    /// Updates one line in the display.
    /// \param text update text
    /// \param row display row index
    static void DSPshow(int row, const char fmt[], ...);

    /// Add new text to display in row, deletes all subsequent lines.
    static void DSPshowDelete(int row, const char fmt[], ...);

    /// deactivates the extra enters which are unnecessary
    static void deactivateDebug(void);
};
#endif
