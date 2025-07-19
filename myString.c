#include <stdio.h>
#include "myString.h"

#define IGUALES 0
#define PRIMMAYSEG 1
#define PRIMMENSEG -1

int my_strcmp(const char *s1, const char *s2)
{
    int dimS1 = my_strlen(s1);
    int dimS2 = my_strlen(s2);

    int menorTam = (dimS1 < dimS2) ? dimS1 : dimS2;

    for (int i = 0; i < menorTam; i++)
    {
        unsigned char c1 = (unsigned char) *(s1 + i);
        unsigned char c2 = (unsigned char) *(s2 + i);

        if (c1 < c2)
            return PRIMMENSEG;
        else if (c1 > c2)
            return PRIMMAYSEG;
    }

    if (dimS1 < dimS2)
        return PRIMMENSEG;
    else if (dimS1 > dimS2)
        return PRIMMAYSEG;

    return IGUALES;
}


int my_strncmp(const char *s1, const char *s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        unsigned char c1 = (unsigned char) *(s1+i);
        unsigned char c2 = (unsigned char) *(s2+i);

        if (c1 < c2)
            return PRIMMENSEG;
        else if (c1 > c2)
            return PRIMMAYSEG;
        else if (c1 == '\0')
            return IGUALES;
    }

    return IGUALES;
}

int my_strlen(const char *s)
{
    int cdadCarac = 0;
    while(1)
    {
        if( *(s+cdadCarac) == 0)
        {
            break;
        }

        cdadCarac++;
    }

    return cdadCarac + 1;
}

char *my_strcpy(char *dst, const char *src)
{
    int tamSrc = my_strlen(src);

    for(int i = 0; i<tamSrc; i++)
    {
        *(dst+i) = *(src+i);
    }
    *(dst+tamSrc) = '\0';
    return dst;
}

char *my_strncpy(char *dst, const char *src, int n)
{
    int tamSrc = my_strlen(src);

    if(n<tamSrc)
    {
        for(int i = 0; i<n; i++)
            *(dst+i) = *(src+i);

    }
    else
    {
        return NULL;
    }


    return dst;
}

char *my_strcat(char *dst, const char *src)
{
    int tamDst = my_strlen(dst);
    int i = 0;
    while(1)
    {
        if( *(src+i) == 0)
        {
            break;
        }

        *(dst+tamDst) = *(src+i);

        i++;
        tamDst++;
    }

    return dst;
}

char *my_strncat(char *dst, const char *src, int n)
{
    int tamDst = my_strlen(dst);

    if(n < my_strlen(src))
    {

        for(int i = 0; i < n; i++)
        {
            *(dst+tamDst) = *(src+i);
            tamDst++;
        }
    }
    else
    {
        return NULL;
    }

    //*(dst+n) = 0;

    return dst;
}

char *my_strchr(char *s, int c)
{
    int dimS = my_strlen(s);
    for(int i = 0; i<dimS; i++)
    {
        if( *(s+i) == c)
        {
            return s+i;
        }
    }

    return NULL;
}

char *my_strstr(char *s1, const char *s2)
{
    if (!*s2)
    {
        return s1;
    }


    for (int i = 0; *(s1+i) != 0; i++)
    {
        int j = 0;
        while ( (*(s1+i+j) == *(s2+j)) && (*(s2+j) != '\0'))
        {
            j++;
        }

        if ( *(s2+j) == '\0')
            return (s1+i);
    }

    return NULL;
}

int my_strspn(const char *s1, const char *s2)
{
    int i = 0;

    while (*(s1+i) != '\0')
    {
        if (my_strchr((char *)s2, *(s1+i)) == NULL)
            return i;

        i++;
    }

    return i;
}

char *my_strpbrk(char *s1, char *s2)
{
    char *pos;
    for(int i = 0; *(s1+i) != '\0'; i++)
    {
        pos = my_strchr(s2, *(s1+i));
        if( pos != NULL)
        {
            return s1+i;
        }
    }

    return NULL;
}


