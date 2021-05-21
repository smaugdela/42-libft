# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 11:59:39 by smagdela          #+#    #+#              #
#    Updated: 2021/05/21 12:27:48 by smagdela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    libft.a

CC        =    gcc -c -o
LINKER    =    ar rcs
RM        =    rm -rf

SRCS    =   ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
            ft_strcat.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncpy.c \

OBJS    =    ${SRCS:.c=.o}

CFLAGS	=    -Wall -Wextra -Werror
LDFLAGS	=    

${NAME}:	${OBJS}
	${LINKER} $@ ${LDFLAGS} $^

all: ${NAME}

${OBJD}%.o:    ${SRCD}%.c
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS} ${NAME}

re:    fclean all

.PHONY: re, all, clean, fclean