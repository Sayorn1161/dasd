#ifndef TRAIN_H
#define TRAIN_H

#include <string>

class Train {
public:
    Train(int number, const std::string& departureTime, const std::string& destination);
    
    int getNumber() const;
    std::string getDepartureTime() const;
    std::string getDestination() const;

private:
    int number;
    std::string departureTime;
    std::string destination;
};

#endif // TRAIN_H
