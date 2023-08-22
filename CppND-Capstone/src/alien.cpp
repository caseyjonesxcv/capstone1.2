#include "alien.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

Alien::Alien(){
  
}

void Alien::Update() {
    int x, y;
    while (true) {
    x = random_w(engine);
    y = 0;
    // Check that the location is not occupied by a snake item before placing
    // food.
    if (!Snake::snake.SnakeCell(x, y)) {
      alien.x = x;
      alien.y = y;
      return;
    }
  }
}
