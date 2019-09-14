#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
#include "ncurses.h"
#include "BasicCharacter.hpp"
#include "LaserBeam.hpp"

#define COLOR_BLACK	0
#define COLOR_RED	1
#define COLOR_GREEN	2
#define COLOR_YELLOW	3
#define COLOR_BLUE	4
#define COLOR_MAGENTA	5
#define COLOR_CYAN	6
#define COLOR_WHITE	7

class Enemy : public BasicCharacter {
private:
    char getRandomType() const;
public:
    Enemy();

    Enemy(int x, int y);

    ~Enemy();

    Enemy &operator=(Enemy const &rhs);

    Enemy(Enemy const &rhs);

    void moveCharacter(WINDOW*, int);

    void displayEnemy(WINDOW*);

    void getHit();

    bool hitByLaser(WINDOW*, LaserBeam*);

    void shoot(LaserBeam*);
};


#endif
