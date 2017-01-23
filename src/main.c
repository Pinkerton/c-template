#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main(int argc, char **argv) {
    printf("Hello, world!\n");
    printf("4 + 5 = %d\n", util_add(4, 5));
    exit(0);
}

