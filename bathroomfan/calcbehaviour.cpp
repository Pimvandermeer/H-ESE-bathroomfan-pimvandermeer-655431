#include "calcbehaviour.h"

double calcBehaviour::calculate(calc_e *enumValue, double *value)
{
    double calculatedValue = 0;
    switch (*enumValue)
    {
    case CALCULATE_TEMP:
        calculatedValue = *value * 4.96;
        SENS_INFO("SIMULATION -- I recieved a temperature value: {} and calculated the value to {}", *value, calculatedValue);
        break;
    case CALCULATE_HUM:
        calculatedValue = *value * 4.96;
        SENS_INFO("SIMULATION -- I recieved a humidity value: {} and calculated the value to {}", *value, calculatedValue);
        break;
    case CALCULATE_PROX:
        calculatedValue = *value * 4.96;
        SENS_INFO("SIMULATION -- I recieved a Proximity value: {} and calculated the value to {}", *value, calculatedValue);
        break;
    default:
        SENS_ERROR("This should not have happend");
        break;
    }
    return calculatedValue;
}
