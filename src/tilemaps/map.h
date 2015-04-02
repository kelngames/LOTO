
#ifndef TILEMAPS_MAP_H_
#define TILEMAPS_MAP_H_

#include <string>

#include <SFML/Graphics.hpp>

#include "tilemaps/tile-map.h"


class Map : public sf::Drawable {
public:
  bool Load(std::string tilemapPath, sf::Vector2u tileSize);

private:
  TileMap ground_, mid_, ceil_;

  virtual void draw(sf::RenderTarget& target, sf::RenderStates  states) const;
};

#endif  // TILEMAPS_MAP_H_
