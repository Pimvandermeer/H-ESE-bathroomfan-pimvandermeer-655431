#define private public   // Makes private functions available
#define protected public // Makes protected variables available
#include "../3rdparty/catch/catch.hpp"
#include "../bathroomfancmake/fancontext.h"

template <class DstType, class SrcType>
bool IsType(const SrcType *src)
{
    return dynamic_cast<const DstType *>(src) != nullptr;
}

TEST_CASE("Fan Context")
{
    SECTION("Init context")
    {
        int minutes = 10;
        FanContext *fancontext = new FanContext(new InitFanState, minutes);
        THEN("Fancontext needs to have a state and the initiated fanstate should have the same context")
        {

            REQUIRE(fancontext->fanState_ != nullptr);
            REQUIRE(fancontext == fancontext->fanState_->fanContext_);
            REQUIRE(IsType<InitFanState>(fancontext->fanState_));
        }
        fancontext->Config();
        THEN("fancontext recieves config command state should be Change state to Idle")
        {
            REQUIRE(IsType<IdleFanState>(fancontext->fanState_));
        }
        delete fancontext;
    }
}
