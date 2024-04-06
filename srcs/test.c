/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 23:12:21 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/06 23:47:17 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
int     main(void)
{
        void    *ptr;

        ptr = "a";

//        ft_printf("%s%c%p%d%i%u%x%X%%","qwerty",'a',ptr,-51,-99,-666,15,-15);

        printf("\n\nteststr:\n");
        ft_printf("%s","qwerty");
        printf("\n%s","qwerty");

        printf("\n\ntestc:\n");
        ft_printf("%c",'a');
        printf("\n%c",'a');

        printf("\n\ntestptr:\n");
        ft_printf("%p",ptr);
        printf("\n%p",ptr);
        printf("\n");
        ft_printf("%p",NULL);
        printf("\n%p",NULL);

        printf("\n\ntestd:\n");
        ft_printf("%d",0);
        printf("\n%d",0);
        printf("\n");
        ft_printf("%d",2147483647);
        printf("\n%d",2147483647);
        printf("\n");
        ft_printf("%d",-2147483647);
        printf("\n%d",-2147483647);

        printf("\n\ntesti:\n");
        ft_printf("%i",0);
        printf("\n%i",0);
        printf("\n");
        ft_printf("%i",2147483647);
        printf("\n%i",2147483647);
        printf("\n");
        ft_printf("%i",-2147483647);
        printf("\n%i",-2147483647);

	printf("\n\ntestu:\n");
        ft_printf("%u",0);
        printf("\n%u",0);
        printf("\n");
        ft_printf("%u",2147483647);
        printf("\n%u",2147483647);
        printf("\n");
        ft_printf("%u",-2147483647);
        printf("\n%u",-2147483647);

	printf("\n\ntestx:\n");
        ft_printf("%x",0);
        printf("\n%x",0);
        printf("\n");
        ft_printf("%x",2147483647);
        printf("\n%x",2147483647);
        printf("\n");
        ft_printf("%x",-2147483647);
        printf("\n%x",-2147483647);

	printf("\n\ntestX:\n");
        ft_printf("%X",0);
        printf("\n%X",0);
        printf("\n");
        ft_printf("%X",2147483647);
        printf("\n%X",2147483647);
        printf("\n");
        ft_printf("%X",-2147483647);
        printf("\n%X",-2147483647);

	printf("\n\ntest\n");
        ft_printf("%%");
        printf("\n%%");
}
