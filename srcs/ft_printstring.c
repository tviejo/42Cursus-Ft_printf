/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:37:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/10 11:21:56 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putrstr(char *str)
{
	int	i;
	int	output;

	i = 0;
	while (str[i] != '\0')
		i++;
	output = i;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (output);
}

int	ft_putvoid(void *str)
{
	unsigned long int	address;

	if (str == NULL)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	address = (unsigned long int)str;
	return (2 + ft_converthexa(address, 'a'));
}
