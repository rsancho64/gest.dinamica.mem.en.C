#include "buffer.h"

int *newIntegerBuffer(size_t tam)
{
    return (int*)malloc(tam*sizeof(int));
}

/*/// ---------------------
int main()
{

    int *buffer10p = newIntegerBuffer(20);
    int *buffer100p = newIntegerBuffer(100);
}
//*/// ---------------------