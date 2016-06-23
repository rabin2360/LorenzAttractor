#include "ex1.h"

void add(Triple *a, Triple *b) {
  a->x+=b->x;
  a->y+=b->y;
  a->z+=b->z;
}

void set(Triple* t, float x, float y, float z) {
  t->x = x;
  t->y = y;
  t->z = z;
}


//Return random double within range [0,1]
double myRandom()
{
  return (rand()/(double)RAND_MAX);
}
