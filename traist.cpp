#include "TrainStation.h"
#include <iostream>

void TrainStation::addTrain(const Train& train) {
    trains.push_back(train);
}

void TrainStation::printAllTrains() const {
    for (const auto& train : trains) {
        std::cout << "Train number: " << train.getNumber() << ", Departure time: " << train.getDepartureTime()
                  << ", Destination: " << train.getDestination() << std::endl;
    }
}

void TrainStation::printTrainsByNumber(int number) const {
    for (const auto& train : trains) {
        if (train.getNumber() == number) {
            std::cout << "Train number: " << train.getNumber() << ", Departure time: " << train.getDepartureTime()
                      << ", Destination: " << train.getDestination() << std::endl;
        }
    }
}

void TrainStation::printTrainsByDestination(const std::string& destination) const {
    for (const auto& train : trains) {
        if (train.getDestination() == destination) {
            std::cout << "Train number: " << train.getNumber() << ", Departure time: " << train.getDepartureTime()
                      << ", Destination: " << train.getDestination() << std::endl;
        }
    }
}
