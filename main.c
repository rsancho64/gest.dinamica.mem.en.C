// #include <stdio.h>
// #include <stdlib.h>
#include "buffer.h"

int main()
{

    size_t TAMBUFF = 10;
    // size_t BUFFLEV = 0;

    // int vE0[] = {11,22,33}; // estatico tam 3

    // buffer tam X int
    int vE[TAMBUFF]; // v estatico
    size_t ve_Level = 0;

    vE[0] = 11;
    ve_Level++;
    vE[1] = 22;
    ve_Level++;
    vE[2] = 33;
    ve_Level++;

    int *buffer10p = newIntegerBuffer(10);
    int *buffer100p = newIntegerBuffer(100);
}

