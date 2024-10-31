#include "TrainStation.h"
#include <iostream>

int main() {
    TrainStation station;
    
    station.addTrain(Train(101, "08:00", "Kyiv"));
    station.addTrain(Train(202, "09:00", "Lviv"));
    station.addTrain(Train(303, "10:00", "Odessa"));

    std::cout << "All trains:" << std::endl;
    station.printAllTrains();

    std::cout << "\nTrains with number 202:" << std::endl;
    station.printTrainsByNumber(202);

    std::cout << "\nTrains to Lviv:" << std::endl;
    station.printTrainsByDestination("Lviv");

    return 0;
}
