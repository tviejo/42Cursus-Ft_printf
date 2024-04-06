/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:37:02 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/06 18:40:40 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putvoid(void *str);
void	ft_converthexa(long long int nb);
void	ft_putnbr(long long int nb);
void    ft_putunbr(unsigned long int nb);
void	ft_puthexalow(unsigned int nb);
void    ft_puthexahigh(unsigned int nb);

#endif
