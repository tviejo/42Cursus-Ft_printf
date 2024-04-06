# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 18:53:05 by tviejo            #+#    #+#              #
#    Updated: 2024/04/06 23:54:33 by tviejo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRC_DIR		=	./srcs/
    
SRC		=	ft_printdec.c	ft_printf.c	ft_printhexa \
			ft_printstring.c	

SRCS		=	${addprefix ${SRC_DIR}, ${SRC}}

OBJS		=	${SRCS:.c=.o}

HEAD		=	./includes/

CC		=	cc

CFLAGS		=	-Wall -Wextra -Werror -c

AR		=	ar rc

RM		=	rm -f

.c.o:
			$(CC) $(CFLAGS) $< -o $@ $(INCLUDES)

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

all:			${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			bonus all clean fclean re
