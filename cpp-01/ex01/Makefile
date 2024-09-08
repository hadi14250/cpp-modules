# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 14:33:07 by hakaddou          #+#    #+#              #
#    Updated: 2023/03/10 14:36:36 by hakaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Zombie.cpp main.cpp
					
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror

NAME			= brainz

all:			$(NAME)

$(NAME):		$(OBJS)
				 $(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
					rm *.o

.PHONY:			all clean fclean re