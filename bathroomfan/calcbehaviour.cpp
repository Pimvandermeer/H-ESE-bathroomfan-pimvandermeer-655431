#include "calcbehaviour.h"

int calcBehaviour::calculate(calc_e *enumValue, int *value)
{
    int calculateValue = 0;

    switch (*enumValue) {
        case CALCULATE_TEMP:
            calculateValue = *value * 10;
            Display::DSPshow(4, "I calculated the Temp value which is %d", calculateValue);
            break;
        case CALULATE_DEFAULT:
            std::cout << " This is default" << std::endl;
            break;
        default:
            std::cout << " This went wrong" << std::endl;
            break;
        }

    return calculateValue;
}
