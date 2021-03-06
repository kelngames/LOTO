
#ifndef BASE_GAME_MANAGER_H_
#define BASE_GAME_MANAGER_H_

#include "engine/resources-manager.h"
#include "engine/instances-manager.h"


class GameManager {
public:

  static ResourcesManager* GetResourcesManager();
  static InstancesManager* GetInstancesManager();

  static sf::Vector2u      GetTileSize() {
    return sf::Vector2u(64, 64);
  }
};

#endif // BASE_GAME_MANAGER_H_
