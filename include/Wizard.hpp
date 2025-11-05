#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "Spell.h"

class Wizard {

public:

    Wizard();
    cast(Spell spell) = 0;
    virtual move(int direction) = 0;
    takeDamage(Spell spell) = 0;
    isCooldownActive() { return m_cooldownActive; };

private:

    int m_position;
    int m_healthPoints;
    double m_speed;
    double m_direction;
    bool m_cooldownActive;

};

#endif /* PULSE_SERVER_HPP */
