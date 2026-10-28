#include "ShadowDance.h"
#include <iostream>

ShadowDance::ShadowDance(uint32_t startLevel)
{
    name = "ShadowDance";

    if (startLevel < 1)
        startLevel = 1;
    if (startLevel > 3)
        startLevel = 3;
    level = startLevel;

    switch (level)
    {
        case 1:
            duration = 4.0f;
            moveSpeedBonus = 20;
            manaCost = 100;
            cooldown = 50.0f;
            break;
        case 2:
            duration = 4.25f;
            moveSpeedBonus = 30;
            manaCost = 100;
            cooldown = 40.0f;
            break;
        case 3:
            duration = 4.5f;
            moveSpeedBonus = 40;
            manaCost = 100;
            cooldown = 30.0f;
            break;
        default:
            break;
    }
}

void ShadowDance::upgrade()
{
    ++level;

    switch (level)
    {
        case 2:
            duration = 4.25f;
            moveSpeedBonus = 30;
            manaCost = 100;
            cooldown = 40.0f;
            break;
        case 3:
            duration = 4.5f;
            moveSpeedBonus = 40;
            manaCost = 100;
            cooldown = 30.0f;
            break;
        default:
            break;
    }

    std::cout << "LEVEL UP " << name << " upgraded to Level " << level << "!";
}


void ShadowDance::printStatus() const
{
    std::cout << std::endl;
    std::cout << "Ability: " << name << std::endl << "LEVEL " << level << std::endl;
    std::cout << "Duration: " << duration << "s" << std::endl;
    std::cout << "Move Speed Bonus: " << moveSpeedBonus << "%" << std::endl;
    std::cout << "Mana Cost: " << manaCost << std::endl;
    std::cout << "Cooldown: " << cooldown << "s" << std::endl;
    std::cout << "--------------------------------" << std::endl;
}