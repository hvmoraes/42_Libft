# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 17:36:38 by hcorrea-          #+#    #+#              #
#    Updated: 2022/10/25 09:03:58 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SUBDIRS		= libc_func add_func extra_func
BONUSDIR	= bonus

SRC			= $(foreach dir, $(SUBDIRS), $(wildcard $(dir)/*.c))
BONUS		= $(foreach dir, $(BONUSDIR), $(wildcard $(dir)/*.c))

CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra -I. -c

RM			= /bin/rm -f


all: 		$(NAME)

$(NAME):	$(SRC:.c=.o)
			ar -rcs $(NAME) $(SRC:.c=.o)

.c.o:
			$(CC) $(CFLAGS) $< -o $(<:.c=.o)

clean:
			$(RM) $(SRC:.c=.o) $(BONUS:.c=.o)
	
fclean: 	clean
			$(RM) all $(NAME)
		
re:			fclean all

bonus: 		$(SRC:.c=.o) $(BONUS:.c=.o)
			ar -rcs all $(SRC:.c=.o) $(BONUS:.c=.o)
