//
// Created by JAD on 17/10/2025.
//

#include "Mobile.h"
#include "Sprite.h"

#include <stdlib.h>

Mobile *createMobile(int x, int y, Direction direction, Sprite *sprite) {
  Mobile *mobile = malloc(sizeof(Mobile));
  mobile->x = x;
  mobile->y = y;
  mobile->direction = direction;
  mobile->sprite = sprite;
  return mobile;
}

Mobile *createPlane(int x, int y, Direction direction) {
  char symbs[5][5] = {{',', ',', ',', ',', ','},
                      {',', ',', ',', ',', ','},
                      {',', ',', ',', ',', ','},
                      {',', ',', ',', ',', ','},
                      {',', ',', ',', ',', ','}};
  Sprite *sprite = createSprite(symbs);
  Mobile *plana = createMobile(x, y, direction, sprite);
  return plana;
}

void destroyMobile(Mobile *mobile) {
  if (!mobile)
    return;
  free(mobile);
}

int getMobileX(Mobile *mobile) {
  if (!mobile)
    return -1;
  return mobile->x;
}

int getMobileY(Mobile *mobile) {
  if (!mobile)
    return -1;
  return mobile->y;
}
Direction getDirection(Mobile *mobile) {
  if (!mobile)
    return NORTH;
  return mobile->direction;
}

Sprite *getMobileSprite(Mobile *mobile) {
  if (!mobile)
    return 0;
  return mobile->sprite;
}
