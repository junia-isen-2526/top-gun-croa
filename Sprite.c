//
// Created by JAD on 17/10/2025.
//

#include "Sprite.h"

#include <stdlib.h>

Sprite *createSprite(char symbols[SPRITE_SIZE][SPRITE_SIZE]) {
  Sprite *sprite = malloc(sizeof(Sprite));
  for (unsigned int i = 0; i < SPRITE_SIZE; i++)
    for (unsigned int j = 0; j < SPRITE_SIZE; j++)
      sprite->symbols[j][i] = symbols[j][i];
  return sprite;
}

void destroySprite(Sprite *sprite) {
  if (!sprite)
    return;
  free(sprite);
}

char getSpritePos(Sprite *sprite, unsigned int x, unsigned int y,
                  Direction dir) {
  if (!sprite || x >= SPRITE_SIZE || y >= SPRITE_SIZE)
    return '\0';
  return sprite->symbols[x][y];
}
