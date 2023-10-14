//
// Created by Jordan on 10/10/2023.
//

#ifndef BOMBERVALI_MAPRENDER_H
#define BOMBERVALI_MAPRENDER_H

#include "../base/GameMap.h"
#include "../base/Entity.h"
#include "List.h"

namespace MapRender {
    void render(GameMap &map, List<Entity> entities) {
        for (int i = 0; i < map.getRows(); ++i) {
            for (int j = 0; j < map.getColumns(); ++j) {
                int tile = map.getTiles()[i][j];

                for (int entityId = 0; entityId < entities.size(); ++entityId) {
                    Entity entity = entities.get(entityId);

                    entity.render(i, j);
                }
            }
        }
    }
}

#endif //BOMBERVALI_MAPRENDER_H
