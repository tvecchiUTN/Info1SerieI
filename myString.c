#include <stdio.h>
#include <stdlib.h>
#include "myString.h"

#define IGUALES 0
#define MENOR -1
#define MAYOR 1

int my_strcmp(const char *s1, const char *s2)
{
    int aux;
    int i;
    for(i = 0; *(s1+i) != 0; i++)
    {
        aux = *(s1+i) - *(s2+i);

        if(aux < 0)
        {
            return MENOR;
        }
        else if(aux > 0)
        {
            return MAYOR;
        }
    }

    if( (*(s1+i) - *(s2+i)) < 0 )
    {
        return MENOR;
    }

    return IGUALES;
}

int my_strncmp(const char *s1, const char *s2, int sz)
{
    int aux;
    int i;
    for(i = 0; (*(s1+i)!=0) && (i<sz); i++)
    {
        aux = *(s1+i) - *(s2+i);

        if(aux < 0)
        {
            return MENOR;
        }
        else if(aux > 0)
        {
            return MAYOR;
        }
    }

    if( (*(s1+i) - *(s2+i)) < 0 )
    {
        return MENOR;
    }

    return IGUALES;
}

size_t my_strlen(const char *s)
{
    int i;
    for(i = 0; *(s+i) != 0; i++);

    return i;
}

char *my_strcpy(char *dest, const char *src)
{
    dest = NULL;

    int sz = my_strlen(src) + 1;

    dest = (char *) malloc(sz * sizeof(char *));
    if(dest == NULL)
    {
        return NULL;
    }

    for(int i = 0; i < sz; i++)
    {
        *(dest+i) = *(src+i);
    }
    return dest;
}

char *my_strncpy(char *dest, const char *src, size_t n)
{
    dest = NULL;

    int sz = my_strlen(src) + 1;

    dest = (char *) malloc((n+1) * sizeof(char *));
    if(dest == NULL)
    {
        return NULL;
    }

    for(int i = 0; (i < n) && (i < sz); i++)
    {
        *(dest+i) = *(src+i);
    }

    *(dest+n) = 0;

    return dest;
}
