#ifndef ALIEN_H
#define ALIEN_H

#include <SDL2/SDL.h>
#include <vector>
#include "SDL.h"



class Alien {
 public:
  Alien() {}

  void Update();

  float speed{.09};

 private:
  SDL_Point position;
  int grid_width;
  int grid_height;
};

#endif