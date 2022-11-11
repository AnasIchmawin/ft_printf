# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 17:27:18 by aichmawi          #+#    #+#              #
#    Updated: 2022/11/07 17:27:24 by aichmawi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -werror

SRCS =	ft_printf.c /
		printc.c	/
		printd.c	/
		printi.c 	/
		printp.c 	/
		prints.c 	/
		printu.c 	/
		printx.c
	
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) = $(OBJS) ft_printf.h
	ar -rcs $@ $^

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean :	
	rm -rf $(OBJS)

fclean : clean $(NAME)
	rm -rf $(NAME)

re : fclean all