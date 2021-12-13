#include "calcbehaviour.h"

double calcBehaviour::calculate(calc_e *enumValue, double *value)
{
    double calculatedValue = 0;
    double test = *value;
    switch (*enumValue) {
        case CALCULATE_TEMP:
            calculatedValue = *value * 4.96;
            Display::DSPshow(4, "I recieved temp value: %.2lf and calculated the value to %.2lf", test, calculatedValue);
            break;
        case CALCULATE_HUM:
            calculatedValue = *value * 4.96;
            Display::DSPshow(4, "I recieved hum value: %d and calculated the value to %d", *value, calculatedValue);
            break;
        case CALCULATE_PROX:
            calculatedValue = *value * 4.96;
            Display::DSPshow(4, "I recieved proximity value: %d and calculated the value to %d", *value, calculatedValue);
            break;
        default:
            std::cout << " This went wrong" << std::endl;
            break;
        }
    return calculatedValue;
}
