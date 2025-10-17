#include "Sky.h"

#include <stdio.h>

int main(void) {
  Sky *sky = createSky(14, 70);
  displaySky(sky);
  return 0;
}
