# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 14:04:18 by donghwi2          #+#    #+#              #
#    Updated: 2025/02/18 00:48:57 by donghwi2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie01
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CXX		=	c++
SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp 
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