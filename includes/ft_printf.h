/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:37:02 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/23 21:07:06 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putrstr(char *str);
int	ft_putvoid(void *str);
int	ft_converthexa(long long int nb, char c);
int	ft_putrecurnbr(int nb);
int	ft_puturecurnbr(unsigned int nb);
int	ft_puthexalow(unsigned int nb);
int	ft_puthexahigh(unsigned int nb);
int	ft_printf(const char *str, ...);

#endif
