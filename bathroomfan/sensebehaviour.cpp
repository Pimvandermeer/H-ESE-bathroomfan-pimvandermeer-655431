#include "sensebehaviour.h"

double senseBehaviour::sense(sense_e *enumValue)
{
    double num = 0.0;

    switch (*enumValue) {
        case SENSE_TEMP:
        num = Devconsole::DCSsimulationSystemInputDouble("How high is the temp put something in between -20 and 80?", -20, 80);
       // BATH_INFO("THE SENSOR BEHAVIOUR IS {} SHOWN", SENSE_TEMP);
        break;
    case SENSE_HUM:
        num = Devconsole::DCSsimulationSystemInputDouble("What is the Humidity?", 0, 100);
        break;
    case SENSE_PROX:
        num = Devconsole::DCSsimulationSystemInputDouble("What is the Proximity?", 0, 100);
        break;
    case SENSE_DEFAULT:
        std::cout << "Something went wrong!" << std::endl;
        break;
    }
    return num;
}
