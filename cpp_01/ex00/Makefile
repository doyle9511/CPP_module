# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 12:56:23 by donghwi2          #+#    #+#              #
#    Updated: 2025/02/18 00:43:13 by donghwi2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie00
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CXX		=	c++
SRC		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS	=	$(SRC:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o		:	%.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re		:
	make fclean
	make all

.PHONY	:	all clean fclean re