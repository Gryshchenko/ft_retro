#include "HealthPack.hpp"

HealthPack::HealthPack(void) : BasicCharacter(rand() % (WIN_WIDTH - 2) + 1, -5 - rand() % 50, 'H') {

}

HealthPack::~HealthPack() {

}

HealthPack::HealthPack(HealthPack const &rhs) {
    *this = rhs;
}

HealthPack &HealthPack::operator=(HealthPack const &rhs) {
    if (this != &rhs) {
        _x = rhs.getX();
        _y = rhs.getY();
    }
    return *this;
}

void HealthPack::displayHealthPack(WINDOW * window) {
    mvwaddch(window, _y, _x, ' ');
    if (_y + 1 == 0) {
        setY(_y + 2);
    } else if (_y + 1 < WIN_HEIGHT - 1) {
        setY(_y + 1);
    } else {
        respawnHealthPack();
    }
    wattron(window, COLOR_PAIR(7));
    mvwaddch(window, _y, _x, _type);
    wattron(window, COLOR_PAIR(6));
}

void HealthPack::respawnHealthPack() {
    setY(-5 - rand() % 20);
    setX(rand() % (WIN_WIDTH - 2) + 1);
}