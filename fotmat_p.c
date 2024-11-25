/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fotmat_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:52:48 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/24 11:43:30 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format_p(void *p)
{
    int count;

    count = 0;
    unsigned long ptr = (unsigned long )p;
        count += write (1, "0x", 2);
    count += ft_address(ptr);
    return(count);
}