#include "DepthShroud.h"
#include <iostream>

DepthShroud::DepthShroud()
    : name("Aghanim Shard")
      , castPoint(0.1f), castBackswing(0.8f), castRange(400.0f), auraRadius(225.0f)
      , effectDelay(0.0f), duration(3.0f), cooldown(75.0f), manaCost(75)
{
}

void DepthShroud::upgrade()
{
    std::cout << name << " cannot be upgraded Aghanim Shard ability" << std::endl;
}

void DepthShroud::printStatus() const
{
    std::cout << std::endl;
    std::cout << "Ability: " << name << std::endl;
    std::cout << "Cast Animation: " << castPoint << " + " << castBackswing << std::endl;
    std::cout << "Cast Range: " << castRange << std::endl;
    std::cout << "Aura Radius: " << auraRadius << std::endl;
    std::cout << "Effect Delay: " << effectDelay << std::endl;
    std::cout << "Duration: " << duration << std::endl;
    std::cout << "Cooldown: " << cooldown << std::endl;
    std::cout << "Mana Cost: " << manaCost << std::endl;
    std::cout << "--------------------------------" << std::endl;
}