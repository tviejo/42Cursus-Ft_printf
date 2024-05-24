/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:37:02 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/24 20:08:16 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putrstr(char *str);
int	ft_putvoid(void *str);
int	ft_converthexa(unsigned long nb, char c);
int	ft_putrecurnbr(int nb);
int	ft_puturecurnbr(unsigned int nb);
int	ft_puthexalow(unsigned long nb);
int	ft_puthexahigh(unsigned long nb);
int	ft_printf(const char *str, ...);

#endif
