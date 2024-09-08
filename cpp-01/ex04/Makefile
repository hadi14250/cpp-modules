# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 19:25:40 by hakaddou          #+#    #+#              #
#    Updated: 2023/03/11 14:37:53 by hakaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp 
					
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror

NAME			= sed

all:			$(NAME)

$(NAME):		$(OBJS)
				 $(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

repclean:
				cd testfiles && rm *.replace && cd ..

re:				fclean $(NAME)
					rm *.o

t1:				
				@echo "file with only search strings in one line..."
				@sleep 1
				./sed testfiles/only_search_strings_one_line.txt searchtext replacetext

t2:				
				@echo "file with only search strings in multiple lines..."
				@sleep 1
				./sed testfiles/only_search_strings_many_lines.txt searchtext replacetext

t3:				
				@echo "file with no search strings..."
				@sleep 1
				./sed testfiles/no_search_strings.txt searchtext replacetext

t4:				
				@echo "empty file..."
				@sleep 1
				./sed testfiles/emptyfile.txt searchtext replacetext

t5:				
				@echo "file that does not exist..."
				@sleep 1
				./sed testfiles/NULL.txt searchtext replacetext
				
t6:
				@echo "a very huge line..."
				@sleep 1
				./sed testfiles/hugeline.txt searchtext replacetext

t7:
				@echo "a very huge file..."
				@sleep 1
				./sed testfiles/hugefile.txt searchtext replacetext

t8:
				@echo "only replace text..."
				@sleep 1
				./sed testfiles/replace.txt searchtext replacetext

t9:
				@echo "replace text with one search text on line 35..."
				@sleep 1
				./sed testfiles/replacebutonesearch.txt searchtext replacetext

.PHONY:			all clean fclean re
