//
// Created by caior on 26/09/2023.
//

#ifndef BOMBERVALI_ENTITY_H
#define BOMBERVALI_ENTITY_H

class Entity {
protected:
    int row, column;

public:
    Entity(int row, int column) {
        this->row = row;
        this->column = column;
    }

    virtual void tick(int clickedKey) {}
    virtual void render(int renderingRow, int renderingColumn) {};

    int getRow() const {
        return row;
    }

    void setRow(int row) {
        this->row = row;
    }

    int getColumn() const {
        return column;
    }

    void setColumn(int column) {
        this->column = column;
    }
};

#endif //BOMBERVALI_ENTITY_H
