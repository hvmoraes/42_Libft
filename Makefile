# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 17:36:38 by hcorrea-          #+#    #+#              #
#    Updated: 2022/09/12 16:46:33 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SUBDIRS		= libc_func add_func extra_func
BONUSDIR	= bonus

SRC			= $(foreach dir, $(SUBDIRS), $(wildcard $(dir)/*.c))
BONUS		= $(foreach dir, $(BONUSDIR), $(wildcard *.c))

CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra -I .

RM			= /bin/rm -f


all: 		$(NAME)

$(NAME):	$(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
						
clean:
			$(RM) $(SRC:=.o) $(BONUS:=.o)
	
fclean: 	clean
			$(RM) all
		
re:			fclean all

bonus: 		$(SRC:=.o) $(BONUS:=.o)
			ar rc all $(SRC:=.o) $(BONUS:=.o)
