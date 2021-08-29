#ifndef MM_H
#define MM_H

#include <stdlib.h>

int mm_init(void);
void mm_free(void *bp);
void *mm_malloc(size_t size);

#endif
