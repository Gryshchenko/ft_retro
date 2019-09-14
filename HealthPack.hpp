#ifndef HEALTHPACK_HPP
#define HEALTHPACK_HPP

#include <string>
#include <iostream>
#include "BasicCharacter.hpp"
#include "ncurses.h"

class HealthPack : public BasicCharacter {
public:
    HealthPack();

    ~HealthPack();

    HealthPack &operator=(HealthPack const &rhs);

    HealthPack(HealthPack const &rhs);

    void displayHealthPack(WINDOW*);

    void respawnHealthPack();
};


#endif
