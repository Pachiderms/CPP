# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 14:46:53 by tzizi             #+#    #+#              #
#    Updated: 2025/02/10 19:45:42 by tzizi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp RPN.cpp \

OBJS = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

tests:
	@echo "test 1: "
	./RPN "89*9-9-9-4-1+"
	@echo "\ntest 2: "
	./RPN "77*7-"
	@echo "\ntest 3: "
	./RPN "12*2/2*24-+"
	@echo "\ntest 4: "
	 ./RPN "(1 + 1)"
	@echo "\ntest 5: "
	./RPN "12*2/2*2456-+"

.PHONY: all re clean fclean