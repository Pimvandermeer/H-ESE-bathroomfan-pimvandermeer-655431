#include "fanstate.h"

FanState::FanState()
{
    STATE_TRACE("Fanstate has been initialised");
}

FanState::~FanState()
{
    STATE_TRACE("Fanstate has been destructed");
}

void FanState::setContext(FanContext *fanContext)
{
    STATE_TRACE("Fanstate set the conext");
    this->fanContext_ = fanContext;
}

void FanState::E_CONFIG()
{
    // Error because is=t must be overwritten by actual state
    STATE_ERROR("Fanstates recieved e_config command")
}

void FanState::E_START()
{
    // Error because is=t must be overwritten by actual state
    STATE_ERROR("Fanstates recieved e_start command")
}

void FanState::E_RUN()
{
    // Error because is=t must be overwritten by actual state
    STATE_ERROR("Fanstate recieved e_run command")
}

void FanState::E_STOP()
{
    // Error because is=t must be overwritten by actual state
    STATE_ERROR("Fanstate recieved e_stop command")
}

void FanState::E_ERROR()
{
    // Error because is=t must be overwritten by actual state
    STATE_ERROR("Fanstate recieved e_error command")
}

void FanState::E_FIXED()
{
    // Error because is=t must be overwritten by actual state
    STATE_ERROR("Fanstate recieved e_fixed command")
}
