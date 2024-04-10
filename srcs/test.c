/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 23:12:21 by tviejo            #+#    #+#             */
/*   Updated: 2024/04/10 11:28:57 by tviejo           ###   ########.fr       */
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
        printf("return:%d\n",ft_printf("%s","qwerty"));
        printf("return:%d\n",printf("%s","qwerty"));

        printf("\n\ntestc:\n");
        printf("return:%d\n",ft_printf("%c",'a'));
        printf("return:%d\n",printf("%c",'a'));

        printf("\n\ntestptr:\n");
        printf("return:%d\n",ft_printf("%p",ptr));
        printf("return:%d\n",printf("%p",ptr));
        printf("return:%d\n",ft_printf("%p",NULL));
        printf("return:%d\n",printf("%p",NULL));

        printf("\n\ntestd:\n");
        printf("return:%d\n",ft_printf("%d",0));
        printf("return:%d\n",printf("%d",0));
        printf("return:%d\n",ft_printf("%d",2147483647));
        printf("return:%d\n",printf("%d",2147483647));
        printf("return:%d\n",ft_printf("%d",-2147483647));
        printf("return:%d\n",printf("%d",-2147483647));
	printf("return:%d\n",ft_printf("%d",-2147483640));
        printf("return:%d\n",printf("%d",-2147483640));

        printf("\n\ntesti:\n");
        printf("return:%d\n",ft_printf("%i",0));
        printf("return:%d\n",printf("%i",0));
        printf("return:%d\n",ft_printf("%i",2147483647));
        printf("return:%d\n",printf("%i",2147483647));
        printf("return:%d\n",ft_printf("%i",-2147483647));
        printf("return:%d\n",printf("%i",-2147483647));
	printf("return:%d\n",ft_printf("%d",-2147483640));
        printf("return:%d\n",printf("%d",-2147483640));

	printf("\n\ntestu:\n");
        printf("return:%d\n",ft_printf("%u",0));
        printf("return:%d\n",printf("%u",0));
        printf("return:%d\n",ft_printf("%u",2147483647));
        printf("return:%d\n",printf("%u",2147483647));
        printf("return:%d\n",ft_printf("%u",-2147483647));
        printf("return:%d\n",printf("%u",-2147483647));
	printf("return:%d\n",ft_printf("%d",-2147483640));
        printf("return:%d\n",printf("%d",-2147483640));

	printf("\n\ntestx:\n");
        printf("return:%d\n",ft_printf("%x",0));
        printf("return:%d\n",printf("%x",0));
        printf("return:%d\n",ft_printf("%x",2147483647));
        printf("return:%d\n",printf("%x",2147483647));
        printf("return:%d\n",ft_printf("%x",-2147483647));
        printf("return:%d\n",printf("%x",-2147483647));

	printf("\n\ntestX:\n");
        printf("return:%d\n",ft_printf("%X",0));
        printf("return:%d\n",printf("%X",0));
        printf("return:%d\n",ft_printf("%X",2147483647));
        printf("return:%d\n",printf("%X",2147483647));
        printf("return:%d\n",ft_printf("%X",-2147483647));
        printf("return:%d\n",printf("%X",-2147483647));

	printf("\n\ntest\n");
        printf("return:%d\n",ft_printf("%%"));
        printf("return:%d\n",printf("%%"));
	printf("\n");
}
