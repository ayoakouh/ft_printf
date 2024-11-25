#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_putstr(char *str);
int    ft_putchar(char c);
int    ft_putnbr(int n);
// char    *ft_strdup(const char *s);
// size_t  ft_strlen(const char *str);
int    ft_putnbr_unsigned(unsigned int n);
int     ft_printf(const char *str, ...);


int    put_hx_x(unsigned int n);
int    put_hexa_X(unsigned int n);
int    format_p(void *p);
int    ft_address(unsigned long n);


#endif
