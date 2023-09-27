//
// Created by caior on 26/09/2023.
//

#ifndef BOMBERVALI_PLAYER_H
#define BOMBERVALI_PLAYER_H

#include <iostream>
#include "../base/Entity.h"

class Player: public Entity {
public:
    Player(int row, int column) : Entity(row, column) {
        std::cout << "Renderizado";
    }

    void tick() {
        std::cout << "Ola mundo, do Tick Player";
    }

    void render() {
        std::cout << "Ola mundo, do Render Player";
    }
};

#endif //BOMBERVALI_PLAYER_H
