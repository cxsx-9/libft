# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:49:59 by csantivi          #+#    #+#              #
#    Updated: 2022/02/18 15:56:57 by csantivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra
all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I libft.h -c ft*.c
	ar cr libft.a ft*.o
	ar s libft.a

clean: 
	rm -rf ft*.o

fclean: clean
	rm -rf libft.a

re: fclean all