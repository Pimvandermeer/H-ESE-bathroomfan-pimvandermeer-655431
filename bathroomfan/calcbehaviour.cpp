#include "calcbehaviour.h"

double calcBehaviour::calculate(calc_e *enumValue, double *value)
{
    double calculatedValue = 0.0;

    switch (*enumValue)
    {
    case CALCULATE_TEMP:
        calculatedValue = round((*value + 20) * 40.96);   //want to get above 0 so + 20 then  ->  4096 / 100 = 40.96
        SENS_INFO("SIMULATION -- I recieved a temperature value: {} Celsius and calculated the value to {}", round_up(*value, 2), calculatedValue);
        break;
    case CALCULATE_HUM:
        calculatedValue = round(*value * 42.6);  //0 - 96 %  4096/96 = 42.6
        SENS_INFO("SIMULATION -- I recieved a humidity value: {}  percentage and calculated the value to {}", *value, calculatedValue);
        break;
    case CALCULATE_PROX:
        calculatedValue = *value;
        SENS_INFO("SIMULATION -- I recieved a Proximity value: {} and calculated the value to {}", *value, calculatedValue);
        break;
    default:
        SENS_ERROR("This should not have happend");
        break;
    }
    return calculatedValue;
}

double calcBehaviour::round_up(double value, int decimal_places)
{
    const double multiplier = std::pow(10.0, decimal_places);
    return std::ceil(value * multiplier) / multiplier;
}
