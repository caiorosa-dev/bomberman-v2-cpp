#include <iostream>
#include "src/base/GameMap.h"
#include "src/utils/MapReader.h"
int main() {
    GameMap mapa = MapReader::readFromFile("../assets/maps/test_map_21x21NEW.csv");

    cout << mapa.getRows() << endl;

    for (int rows = 0; rows < mapa.getRows(); ++rows) {
        for (int columns = 0; columns < mapa.getColumns(); ++columns) {
            int valor = mapa.getTiles()[rows][columns];

            cout << valor << " ";

        }
        cout<<endl;
    }

    std::cout << "Hello, World, development!" << std::endl;

    return 0;
}
