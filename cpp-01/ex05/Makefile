# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 16:53:11 by hakaddou          #+#    #+#              #
#    Updated: 2023/03/11 18:46:12 by hakaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Harl.cpp
					
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror

NAME			= harl

all:			$(NAME)

$(NAME):		$(OBJS)
				 $(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
					rm *.o