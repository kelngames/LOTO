
#ifndef STRUCTURES_STRUCTURE_H_
#define STRUCTURES_STRUCTURE_H_

#include <SFML/Graphics.hpp>

#include "engine/instance.h"


class Structure : public Instance {
public:

  Structure();
  virtual ~Structure();

  virtual void Step(sf::Time elapsed);

  void         set_life(unsigned life) {
    life_ = life;
  }

  unsigned life() {
    return life_;
  }

  void set_position(sf::Vector2f pos) {
    sprite_.setPosition(pos);
  }

  void set_range(unsigned range) {
    range_ = range;
  }

  void set_attack_speed(unsigned attack_speed) {
    attack_speed_ = attack_speed;
  }

protected:

  unsigned life_;
  unsigned damage_;
  unsigned attack_speed_;
  unsigned range_;
};

#endif // STRUCTURES_STRUCTURE_H_
