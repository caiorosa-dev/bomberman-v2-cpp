//
// Created by caior on 26/09/2023.
//

#ifndef BOMBERVALI_PLAYER_H
#define BOMBERVALI_PLAYER_H

#include <iostream>
#include "../base/LivedEntity.h"

using namespace std;

class Player: public LivedEntity {
public:
    Player(int row, int column) : LivedEntity(row, column) {
        std::cout << "Renderizado";
    }

    void tick(int clickedKey) override {
        std::cout << "Ola mundo, do Tick Player";
    }

    void render(int renderingRow, int renderingColumn) override {
        std::cout << "Ola mundo, do Render Player";
    }
};

#endif //BOMBERVALI_PLAYER_H
