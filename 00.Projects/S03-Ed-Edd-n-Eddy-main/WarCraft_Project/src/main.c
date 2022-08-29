#include "Arena.h"

#include <stdio.h>
#include <stdlib.h>


int main()
{
  Arena arena;
  createHeroes(&arena); 
  StartGame(&arena);
  deinitArena(&arena);

  
  return EXIT_SUCCESS;
}
