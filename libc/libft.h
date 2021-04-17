#ifndef LIBFT_H

#define LIBFT_H

#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int simb, size_t n);
void ft_bzero(void *dest, size_t n);
void *ft_memcpy(void *dest, const void *cpy, size_t n);
void *ft_memccpy(void *dest, const void *cpy, int ch, size_t n);
void *ft_memove(void *dest, const void *cpy, size_t n);
void *ft_memchr(void *dest, int ch, size_t n);
int ft_memcmp(void *cmp1, const void *cmp2, size_t n);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *cpy, size_t n);
size_t ft_strlcat(char *dest, const char *cpy, size_t n);
char *ft_strchr(const char *str, int n);
char *ft_strrchr(const char *str, int n);
char *ft_strnstr(const char *str1, const char *str2, size_t n);
int ft_strncmp(const char *cmp1, const char *cmp2, size_t n);
int ft_atoi(const char *str);
int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isalnum(int ch);
int ft_isascii(int ch);

#endif
