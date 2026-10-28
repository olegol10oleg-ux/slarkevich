#ifndef SHADOW_DANCE_H
#define SHADOW_DANCE_H

#include <string>

class ShadowDance
{
public:
    ShadowDance(uint32_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;

    uint32_t level;
    uint32_t moveSpeedBonus;
    uint32_t manaCost;
    double cooldown;
    double duration;
};


#endif