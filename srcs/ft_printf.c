/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:36:32 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/06 19:46:17 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static int	ft_convert(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		ft_putvoid(va_arg(args, void *));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_puthexalow(va_arg(args, unsigned int));
	else if (c == 'X')
		ft_puthexahigh(va_arg(args, unsigned int));
	else if (c == '%')
		ft_putchar('%');
	else
		return (0);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		converted;

	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			return (-1);
		i++;
		converted = ft_convert(str[i], args);
		if (converted == 0)
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	void	*ptr;

	ptr = "a";
	ft_printf("%s%c%p%d%i%u%x%X%%","qwerty",'a',ptr,-51,-99,-666,15,-15);
	printf("\n%s%c%p%d%i%u%x%X%%","qwerty",'a',ptr,-51,-99,-666,15,-15);
}
*/
