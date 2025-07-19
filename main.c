#include <stdio.h>
#include "myString.h"

int main(void)
{
    char s1[] = {"Hola a todos, hoy es ..."};
    //char s2[] = {"bd ."};
    char s3[] = "xyz123";
    //char s4[] = "bruc";
    char *p;
    p = my_strpbrk(s1, s3);

    printf("%s\n", p);
    return 0;
}
