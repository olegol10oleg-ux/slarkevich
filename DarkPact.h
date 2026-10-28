#ifndef DARK_PACT_H
#define DARK_PACT_H

#include <string>


class DarkPact
{
public:
    DarkPact(uint32_t startLevel = 1);

    void upgrade();
    void printStatus() const;
private:
    std::string name;

    uint32_t level;
    uint32_t damage;
    uint32_t selfDamage;
    uint32_t manaCost;

    double cooldown;
};

#endif