#ifndef KEYBOARD_H
#define KEYBOARD_H


#include "devconsole.h"

/* Keyboard is een aparte klasse/bject die zorgt voor de afhandeling van de ingave van de gebruiker
hier hoeven variable geen private cuntie te hebben */

class Keyboard
{
    public:
    /// Initialises the keyboard (KYB) subsystem.
    void KYBinitialise(void);

    /// Empty input buffer (stdin).
    void KYBclear(void);

    /// Reads all input characters after pressing Enter.
    /// \post All remaining buffered characters are removed from the input buffer
    /// (stdin).
    /// \return First read character.
    char KYBgetchar(void);

    /// Read one integer value, remaining buffered characters will be deleted.
    /// \return the read in integer value, or if input is not an integer
    /// ifWrongValue will be returned.
    int KYBgetint(int ifWrongValue);

    /// Read one double value, remaining buffered characters will be deleted.
    /// \return the read in double value, or if input is not a double ifWrongValue
    /// will be returned.
    double KYBgetdouble(double ifWrongValue);
};

#endif
