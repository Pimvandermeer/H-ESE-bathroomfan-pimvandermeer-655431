#include "fanstate.h"


FanState::~FanState()
{
    Display::DSPshow(2, "Fanstate destructed");
}

void FanState::setContext(FanContext *fanContext)
{
    this->fanContext_ = fanContext;
}

void FanState::E_START()
{
    Display::DSPshow(2, "Fan states e_start function");
}

void FanState::E_RUN()
{
    Display::DSPshow(2, "Fan states e_run function");
}

void FanState::E_STOP()
{
    Display::DSPshow(2, "Fan states e_stop function");
}

void FanState::E_ERROR()
{
    Display::DSPshow(2, "Fan states e_error function");
}

void FanState::E_FIXED()
{
    Display::DSPshow(2, "Fan states e_fixed function");
}

