#ifndef SALTWATER_SHIV_H
#define SALTWATER_SHIV_H

#include <string>


class SaltwaterShiv
{
public:
    SaltwaterShiv(uint32_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;

    uint32_t level;
    uint32_t healthRestorationChange;
    uint32_t healthRegenChange;
    uint32_t moveSpeedChange;
    uint32_t manaCost;

    double cooldown;
    double duration;
};

#endif