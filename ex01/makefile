# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 15:21:21 by hakaddou          #+#    #+#              #
#    Updated: 2023/03/05 14:47:59 by hakaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= PhoneBook.cpp contact_set_and_get.cpp phonebook_set_and_get.cpp
					
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
CXXFLAGS			= -std=c++98 -Wall -Wextra -Werror

NAME			= PhoneBook

all:			$(NAME)

$(NAME):		$(OBJS)
				 $(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
					rm *.o

.PHONY:			all clean fclean re