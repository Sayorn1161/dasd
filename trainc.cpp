#include "Train.h"

Train::Train(int number, const std::string& departureTime, const std::string& destination)
    : number(number), departureTime(departureTime), destination(destination) {}

int Train::getNumber() const {
    return number;
}

std::string Train::getDepartureTime() const {
    return departureTime;
}

std::string Train::getDestination() const {
    return destination;
}
