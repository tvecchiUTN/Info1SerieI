#include <stdio.h>
#include <stdlib.h>
#include "myString.h"

int main(int argc, char **argv)
{
    char *destino = NULL;
    printf("%s\n", my_strncpy(destino, argv[1], 1));

    free(destino);
    return 0;
}


