//
// Created by caior on 28/09/2023.
//

#ifndef BOMBERVALI_MAPREADER_H
#define BOMBERVALI_MAPREADER_H

#include <fstream>
#include <sstream>
#include <iostream>
#include "../base/GameMap.h"
#include "StringUtils.h"

namespace MapReader {
    GameMap readFromFile(const string& fileName) {
        ifstream file;

        int rows = 0, columns = 0;
        vector<vector<int>> loadedTiles;

        file.open(fileName);

        string currentLine;
        while (!file.eof()) {
            getline(file, currentLine);

            if (StringUtils::contains(currentLine, '=')) {
                vector<string> splitString = StringUtils::splitString(currentLine, '=');

                if (splitString[0] == "HEIGHT") {
                    rows = StringUtils::toInt(splitString[1]);
                }

                if (splitString[0] == "WIDTH") {
                    columns = StringUtils::toInt(splitString[1]);
                }
                continue;
            }

            vector<string> splitString = StringUtils::splitString(currentLine, ',');

            vector<int> columnVector;

            for (int i = 0; i < splitString.size(); ++i) {
                string stringValue = splitString[i];
                int intValue = StringUtils::toInt(stringValue);

                columnVector.push_back(intValue);
            }

            loadedTiles.push_back(columnVector);
        }

        GameMap newMap(rows, columns, loadedTiles);

        return newMap;
    }
}

#endif //BOMBERVALI_MAPREADER_H
