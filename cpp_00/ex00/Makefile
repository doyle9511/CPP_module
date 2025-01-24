# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/20 15:58:21 by donghwi2          #+#    #+#              #
#    Updated: 2025/01/20 16:05:09 by donghwi2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CXX		=	c++
SRC		=	megaphone.cpp
OBJ		=	$(SRC:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o		: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJ)

fclean	:	clean
	rm -rf $(NAME)

re		:
	make fclean
	make all

.PHONY	:	all clean fclean re