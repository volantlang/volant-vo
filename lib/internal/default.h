#ifndef VO_DEFAULT
#define VO_DEFAULT

#include <string.h>
#include <stdio.h>
#include "heap.h"
#include "types.h"

#define I_NEW(type, val) ({ void *ptr = malloc(sizeof(type)); type v = val; memcpy(ptr, &v, sizeof(type)); ptr; })
#define I_NEW_NV(type) ((type *)malloc(sizeof(type)))

#define RETURN(expr) return expr

int v0_main();

int main() {
    return v0_main();
};

#endif /* VO_DEFAULT */