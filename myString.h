#ifndef __MYSTRING_H
#define __MYSTRING_H

#define LONG_MAX 100

int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int n);
int my_strlen(const char *s);
char *my_strcpy(char *dst, const char *src);
char *my_strncpy(char *dst, const char *src, int n);

char *my_strcat(char *dst, const char *src);
char *my_strncat(char *dst, const char *src, int n);

char *my_strchr(char *s, int c);
char *my_strstr(char *s1, const char *s2);

int my_strspn(const char *s1, const char *s2);

char *my_strpbrk(char *s1, char *s2);

#endif
