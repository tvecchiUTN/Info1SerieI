#ifndef __MYSTRING_H
#define __MYSTRING_H

int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int sz);
size_t my_strlen(const char *s);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, size_t n);

#endif
