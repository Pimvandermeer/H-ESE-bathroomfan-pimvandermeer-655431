#include "errorfanstate.h"

ErrorFanState::~ErrorFanState()
{
    STATE_TRACE("IdleFanstate has been destructed");
}

void ErrorFanState::E_CONFIG()
{
    // Error because errorstate should not recieve this
    STATE_ERROR("ErrorFanState recieved e_config command");
}

void ErrorFanState::E_START()
{
    // Error because errorstate should not recieve this
    STATE_ERROR("ErrorFanState recieved e_start command");
}

void ErrorFanState::E_RUN()
{
    // Error because errorstate should not recieve this
    STATE_ERROR("ErrorFanState recieved e_run command");
}

void ErrorFanState::E_STOP()
{
    // Error because errorstate should not recieve this
    STATE_ERROR("ErrorFanState recieved e_stop command");
}

void ErrorFanState::E_ERROR()
{
    // Error because errorstate should not recieve this
    STATE_INFO("ErrorFanState recieved e_start command");
    //At this moment there is no known error which should be taken care of but it is possible in this event
    //after the event the concext should change again to init state
    this->fanContext_->TransitionTo(new InitFanState());
}

void ErrorFanState::E_FIXED()
{
    // Error because errorstate should not recieve this
    STATE_INFO("RunFanState recieved e_fixed command");
}
