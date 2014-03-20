#include <stdio.h>
#include "headers/mem_man.h"
#include "headers/types.h"
#include "headers/proc.h"
#include "headers/util.h"


#define PAGE_COUNT          60536
#define PAGE_MASK           ( PAGE_COUNT - 1 )
#define VAS_VEC_SIZE        ( 1 << 6 )
#define VAS_VEC_SIZE_MASK   ( VAS_VEC_SIZE - 1 )



