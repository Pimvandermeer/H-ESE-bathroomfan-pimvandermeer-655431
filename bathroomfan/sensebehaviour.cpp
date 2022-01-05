#include "sensebehaviour.h"

double senseBehaviour::sense(sense_e *enumValue)
{
    double num = 0.0;

    switch (*enumValue) {
        case SENSE_TEMP:
        num = createRandomNumber(lowTemp, highTemp);
        break;
    case SENSE_HUM:
        num = createRandomNumber(lowHum, highHum);
        break;
    case SENSE_PROX:
        num = createRandomNumber(lowProx, highProx);
        break;
    case SENSE_DEFAULT:
        std::cout << "Something went wrong!" << std::endl;
        break;
    }
    return num;
}

double senseBehaviour::createRandomNumber(double lowerBound, double higherBound)
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<double> distr(lowerBound, higherBound);

    double number = distr(eng);

    return number;
}

int senseBehaviour::createRandomNumber(int lowerBound, int higherBound)
{
    srand((unsigned) time(0));
    int randomNumber;

    randomNumber = (rand() % higherBound) + lowerBound;
    return randomNumber;
}
