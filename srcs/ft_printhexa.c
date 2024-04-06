/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:38:21 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/06 19:31:21 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_converthexa(long long int nb)
{
	if (nb > 15)
	{
		ft_converthexa(nb / 16);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'a' - 10);
	}
	else
	{
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'a' - 10);
	}
}

static void	ft_converthexahigh(long long int nb)
{
	if (nb > 15)
	{
		ft_converthexahigh(nb / 16);
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'A' - 10);
	}
	else
	{
		if (nb % 16 <= 9)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'A' - 10);
	}
}

void	ft_puthexalow(unsigned int nb)
{
	ft_converthexa(nb);
}

void	ft_puthexahigh(unsigned int nb)
{
	ft_converthexahigh(nb);
}
/*
int	main(void)
{
	ft_converthexa(15);
}
*/
