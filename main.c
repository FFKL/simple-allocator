#include "lib/mm.h"

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  mm_init();
  char *bp = mm_malloc(5);
  memcpy(bp, "Test", 5);
  printf("Value: %s\n", bp);
  mm_free(bp);
  return 0;
}
