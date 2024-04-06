/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:36:32 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/06 18:44:20 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *str, ...)
{
	va_list args;
    	va_start(args, str);
	int	i;

	i = 0;
	while(str[i] !='\0')
	{
		if (str[i] != '%')
			return (-1);
		i++;
		if (str[i] == 'c')
			ft_putchar(va_arg(args, int));
		else if (str[i] == 's')
                        ft_putstr(va_arg(args, char *));
		else if (str[i] == 'p')
                        ft_putvoid(va_arg(args, void *));
		else if (str[i] == 'd')
                        ft_putnbr(va_arg(args, int));
		else if (str[i] == 'i')
                        ft_putnbr(va_arg(args, int));
		else if (str[i] == 'u')
                        ft_putunbr(va_arg(args, unsigned int));
		else if (str[i] == 'x')
                        ft_puthexalow(va_arg(args, unsigned int));
		else if (str[i] == 'X')
                        ft_puthexahigh(va_arg(args, unsigned int));
		else if (str[i] == '%')
                        ft_putchar('%');
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	void	*ptr;

	ptr = "a";
	ft_printf("%s%c%p%d%i%u%x%X%%", "qwerty", 'a', ptr,-51515,-999, -666, 15, -15);
	printf("\n%s%c%p%d%i%u%x%X%%", "qwerty", 'a', ptr,-51515,-999, -666, 15, -15);
}

