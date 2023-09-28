//
// Created by caior on 28/09/2023.
//

#ifndef BOMBERVALI_MAP_H
#define BOMBERVALI_MAP_H

#include <utility>
#include <vector>
#include <string>

using namespace std;

class Map {
private:
    int rows, columns;
    vector<vector<int>> tiles;

public:
    Map(int rows, int columns, vector<vector<int>> tiles) {
        this->rows = rows;
        this->columns = columns;
        this->tiles = std::move(tiles);
    }

    vector<vector<int>> getTiles() {
        return this->tiles;
    }

    int getRows() const {
        return this->rows;
    }

    int getColumns() const {
        return this->rows;
    }
};

#endif //BOMBERVALI_MAP_H
