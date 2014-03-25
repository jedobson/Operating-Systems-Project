#include <stdio.h>
#include "headers/mem_man.h"
#include "headers/types.h"
#include "headers/proc.h"
#include "headers/util.h"


#define PAGE_COUNT          60536
#define PAGE_MASK           ( PAGE_COUNT - 1 )
#define VAS_VEC_SIZE        ( 1 << 6 )
#define VAS_VEC_SIZE_MASK   ( VAS_VEC_SIZE - 1 )



static page             mem( PAGE_COUNT );
static u16              page_eval               =       0;
static mem_manage       mem_man( PAGE_COUNT )   =       (0);
static u16              mem_offset              =       1;
static u64              vas_vec( VAS_VEC_SIZE );

