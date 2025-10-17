//
// Created by JAD on 17/10/2025.
//

#ifndef JUNIA_ISEN3_TOPGUN__SPRITE_H_
#define JUNIA_ISEN3_TOPGUN__SPRITE_H_

#include "Direction.h"

#define SPRITE_SIZE 5
typedef struct {
  char symbols[SPRITE_SIZE][SPRITE_SIZE];
} Sprite;

Sprite *createSprite(char symbols[SPRITE_SIZE][SPRITE_SIZE]);

void destroySprite(Sprite *sprite);

char getSpritePos(Sprite *sprite, unsigned int x, unsigned int y,
                  Direction dir);

#endif // JUNIA_ISEN3_TOPGUN__SPRITE_H_
