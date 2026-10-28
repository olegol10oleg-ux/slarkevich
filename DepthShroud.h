#ifndef DEPTHSHROUD_H
#define DEPTHSHROUD_H
#include <string>

class DepthShroud
{
public:
    DepthShroud();

    void upgrade();
    void printStatus() const;

private:
    std::string name;

    float castPoint;
    float castBackswing;
    float castRange;
    float auraRadius;
    float effectDelay;
    float duration;
    float cooldown;
    uint32_t manaCost;
};

#endif