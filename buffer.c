/*
    gestion dinamica de memoria. intro.
    RSA. octubre 2023
*/
#include <stdio.h>
#include <stdlib.h>

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

    int *vD = (int *)malloc(TAMBUFF * sizeof(int));
    size_t vd_Level = 0;

    *vD = 11;
    vd_Level++;
    *(vD + 1) = 22;
    vd_Level++;
    *(vD + 2) = 33;
    vd_Level++;
}

