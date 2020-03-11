# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbooker <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 07:30:52 by dbooker           #+#    #+#              #
#    Updated: 2020/02/25 15:28:48 by dbooker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -I./include

NAME = libft.a

SRC = *.c

OBJECTS = *.o

all: $(NAME)	
	
$(NAME):
	gcc $(FLAGS) -c $(SRC) 
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
