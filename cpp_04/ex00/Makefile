# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 14:04:18 by donghwi2          #+#    #+#              #
#    Updated: 2025/03/25 18:40:31 by donghwi2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Polymorphism
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CXX		=	c++			# vscode용
#CXX	=	clang++ 	# vim용
SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o		: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re		:
	make fclean
	make all

.PHONY	:	all clean fclean re