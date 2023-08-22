#include "controller.h"
#include <iostream>
#include "SDL.h"
#include <SDL2/SDL.h>
#include "snake.h"



void Controller::ChangeDirection(Snake &snake, Snake::Direction input) const {
  snake.direction = input;
  return;
}


void Controller::HandleInput(bool &running, Snake &snake) const {
  SDL_Event e;
  int keypress = 0;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      running = false;
    } else if (e.type == SDL_KEYDOWN) {
      keypress += 1;
      switch (e.key.keysym.sym) {  
        case SDLK_w:
          ChangeDirection(snake, Snake::Direction::kUp);
          break;

        case SDLK_s:
          ChangeDirection(snake, Snake::Direction::kDown);
          break;

        case SDLK_a:
          ChangeDirection(snake, Snake::Direction::kLeft);
          break;

        case SDLK_d:
          ChangeDirection(snake, Snake::Direction::kRight);
          break;

      }
    } else if (e.type == SDL_KEYUP) {
      switch(e.key.keysym.sym) {
           case SDLK_w:
          ChangeDirection(snake, Snake::Direction::kNone);
          break;

        case SDLK_s:
          ChangeDirection(snake, Snake::Direction::kNone);
          break;

        case SDLK_a:
          ChangeDirection(snake, Snake::Direction::kNone);
          break;

        case SDLK_d:
          ChangeDirection(snake, Snake::Direction::kNone);
          break;
        
      }
    }
  }
}

