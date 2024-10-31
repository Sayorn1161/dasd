#ifndef TRAINSTATION_H
#define TRAINSTATION_H

#include "Train.h"
#include <vector>
#include <string>

class TrainStation {
public:
    void addTrain(const Train& train);
    void printAllTrains() const;
    void printTrainsByNumber(int number) const;
    void printTrainsByDestination(const std::string& destination) const;

private:
    std::vector<Train> trains;
};

#endif // TRAINSTATION_H
