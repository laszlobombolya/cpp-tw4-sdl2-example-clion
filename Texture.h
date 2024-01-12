//
// Created by Joe Bekor on 2024. 01. 11..
//

#pragma once
#include <string>
#include <SDL_image.h>


class Texture {
 public:
  Texture(SDL_Texture* texture);
  ~Texture();
  void render(SDL_Renderer* renderer, const SDL_Rect* pos);

 private:
  SDL_Texture* texture;

};
