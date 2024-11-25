/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:09:32 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/24 09:38:17 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int    ft_putnbr_unsigned(unsigned int n)
{
    int count = 0;
    if (n >= 10)
    {
        count += ft_putnbr_unsigned(n / 10);
    }
    count += ft_putchar (n % 10 + '0');
    return (count);
}