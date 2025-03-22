# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 14:04:18 by donghwi2          #+#    #+#              #
#    Updated: 2025/03/22 19:15:16 by donghwi2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ClapTrap
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CXX		=	c++			# vscode용
#CXX	=	clang++ 	# vim용
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp DiamondTrap.cpp
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