#ifndef POUNCE_H
#define POUNCE_H

#include <string>

class Pounce
{
public:
    Pounce(uint32_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;

    uint32_t level;
    uint32_t leapDistance;
    uint32_t latchRadius;
    uint32_t manaCost;

    double leashDuration;
    double cooldown;

};

#endif