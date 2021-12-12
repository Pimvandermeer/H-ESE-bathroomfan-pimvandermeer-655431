#include "sensebehaviour.h"

int senseBehaviour::sense(sense_e *enumValue)
{
    int num = 0;
    switch (*enumValue) {
        case SENSE_TEMP:
        num = Devconsole::DCSsimulationSystemInputInteger("How high is the temp?", -20, 80);
        break;
    case SENSE_HUM:
        num = Devconsole::DCSsimulationSystemInputInteger("What is the Humidity?", 0, 100);
        break;
    case SENSE_PROX:
        num = Devconsole::DCSsimulationSystemInputInteger("What is the Proximity?", 0, 100);
        break;
    case SENSE_DEFAULT:
        std::cout << "Something went wrong!" << std::endl;
        break;
    }
    return num;
}
