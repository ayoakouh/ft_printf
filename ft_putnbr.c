/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:12:59 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/24 09:35:05 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    int count = 0;
    if (n == -2147483648)
        count += write(1, "-2147483648", 11);
    else if (n < 0)
    {
        count += ft_putchar('-');
        n *= (-1);
        count += ft_putnbr(n);
    }
    else if (n > 9)
    {
        count += ft_putnbr(n / 10);
        count += ft_putnbr(n % 10);
    }
    else
        count += ft_putchar (n + '0');
        return (count);
}