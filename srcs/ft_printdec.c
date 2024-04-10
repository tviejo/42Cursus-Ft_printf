/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:38:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/10 17:01:01 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putrecurnbr(long long int nb)
{
	int		i;
	int		output;
	char	toprint[12];

	if (nb == 0)
		return (ft_putchar('0'));
	i = 0;
	output = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		output++;
	}
	while (nb > 0)
	{
		toprint[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	toprint[i] = '\0';
	output = output + ft_putrstr(toprint);
	return (output);
}

int	ft_puturecurnbr(unsigned long int nb)
{
	int		i;
	int		output;
	char	toprint[12];

	if (nb == 0)
		return (ft_putchar('0'));
	i = 0;
	while (nb > 0)
	{
		toprint[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	toprint[i] = '\0';
	output = ft_putrstr(toprint);
	return (output);
}
