//
// Created by JAD on 17/10/2025.
//

#include "Sky.h"

#include <stdio.h>
#include <stdlib.h>

Sky *createSky(int height, int width) {
  Sky *sky = malloc(sizeof(Sky));
  sky->height = height;
  sky->width = width;
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
    for (unsigned int j = 0; j < sky->width; j++)
      putchar(EMPTY_SKY_TILE);
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
  if (!sky)
    return;
}
