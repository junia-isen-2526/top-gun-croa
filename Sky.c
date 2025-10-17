//
// Created by JAD on 17/10/2025.
//

#include "Sky.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

Sky *createSky(int height, int width) {
  Sky *sky = malloc(sizeof(Sky));
  sky->height = height;
  sky->width = width;
  for (int i = 0; i < 10; i++)
    sky->mobs[i] = 0; // null insurance
  sky->used_mobs = 0;
  return sky;
}

void destroySky(Sky *sky) {
  if (!sky)
    return;
  free(sky);
}

void displaySky(Sky *sky) {
  if (!sky)
    return;
  for (unsigned int i = 0; i < sky->height; i++) {
    for (unsigned int j = 0; j < sky->width; j++) {
      bool found = false;
      for (unsigned int mob = 0; mob < sky->used_mobs; mob++) {
        Mobile *m = sky->mobs[mob];
        // coords check
        int diffX = getMobileX(m) - i;
        int diffY = getMobileY(m) - j;
        // overlap check
        if (diffX <= 5 || diffY <= 5) {
          // TODO mk getter
          putchar(getMobileSprite(m)->symbols[diffY][diffX]);
          break;
        }
      }
      if (!found)
        putchar(EMPTY_SKY_TILE);
    }
    putchar('\n');
  }
}

int getSkyHeight(Sky *sky) {
  if (!sky)
    return -1;
  return sky->height;
}

int getSkyWidth(Sky *sky) {
  if (!sky)
    return -1;
  return sky->width;
}

void putMobileOnSky(Sky *sky, Mobile *mobile) {
  if (!sky || !mobile)
    return;
  if (sky->used_mobs >= 10)
    return;
  sky->mobs[sky->used_mobs] = mobile;
  sky->used_mobs++;
}
