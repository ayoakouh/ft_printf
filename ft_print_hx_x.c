/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hx_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 02:25:23 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/24 11:13:11 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int put_hx_x(unsigned int n)
{
    int count = 0;
    int i = 0;
    char hexa[] = "0123456789abcdef";
    char buffer[16];
    if (n == 0)
        count += write (1, "0", 1);
        while (n > 0)
        {
            buffer[i++] = hexa[n % 16];
            n /= 16;
        }
        while (i > 0)
        {
            count += write (1, &buffer[--i], 1);
        }
        return (count);
}