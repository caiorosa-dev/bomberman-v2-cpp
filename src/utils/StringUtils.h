//
// Created by caior on 28/09/2023.
//

#ifndef BOMBERVALI_STRINGUTILS_H
#define BOMBERVALI_STRINGUTILS_H

#include <string>
#include <vector>
#include <sstream>

using namespace std;

namespace StringUtils {
    vector<string> splitString(const string& text, char delimiter) {
        stringstream stream(text);
        string currentString;
        vector<string> list;

        while (getline(stream, currentString, delimiter)){
            list.push_back(currentString);
        }

        return list;
    }

    int toInt(const string& numberString) {
        int value = stoi(numberString);

        return value;
    }

    bool contains(const std::string& str, char targetChar) {
        return str.find(targetChar) != std::string::npos;
    }
}

#endif //BOMBERVALI_STRINGUTILS_H
