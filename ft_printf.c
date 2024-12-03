/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:15:32 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/25 14:50:20 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_format(va_list args, char sp)
{
	int     count;

	count = 0;
	if(sp == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (sp == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (sp == 'd' || sp == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (sp == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (sp == 'x')
		count += put_hx_x(va_arg(args, unsigned int));
	else if (sp == 'X')
		count += put_hexa_X(va_arg(args, unsigned int));
	else if (sp == 'p')
		count += format_p(va_arg(args, void *));
	else if (sp == '%')
		count += write (1, "%", 1);
		va_end(args);
		return(count);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int count;
	va_list args;

	i = 0;
	count = 0;
	if (write (1, "", 0) == -1)
		return(-1);
	va_start(args, str);
	while (str[i] != '\0')
	{
		if(str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			count += check_format(args, str[i]);
		}
		else
			count += ft_putchar(str[i]);
			i++;
	}
	va_end(args);
	return (count);
}
