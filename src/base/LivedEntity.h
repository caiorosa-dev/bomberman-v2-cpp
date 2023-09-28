//
// Created by caior on 28/09/2023.
//

#ifndef BOMBERVALI_LIVEDENTITY_H
#define BOMBERVALI_LIVEDENTITY_H

#include "Entity.h"

class LivedEntity: public Entity {
protected:
    bool isAlive { true };

public:
    LivedEntity(int row, int column) : Entity(row, column) {}

    void setIsAlive(bool value) {
        this->isAlive = value;
    }

    bool getIsAlive() const {
        return this->isAlive;
    }
};

#endif //BOMBERVALI_LIVEDENTITY_H
