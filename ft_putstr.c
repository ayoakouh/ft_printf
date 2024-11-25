/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:50:09 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/24 12:35:38 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int i = 0;
	if (str == NULL)
		return(write(1, "(null)", 6));
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);	
}
