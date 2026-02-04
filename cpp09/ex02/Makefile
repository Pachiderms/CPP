# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/04 10:40:43 by tzizi             #+#    #+#              #
#    Updated: 2026/02/04 11:52:27 by tzizi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = main.cpp PmergeMe.cpp \

OBJS = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

test: all
	@echo "test 1: "
	./PmergeMe 3 5 9 7 4
	@echo "\ntest 2: "
	./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
	@echo "\ntest 3: "
	./PmergeMe 3 4
	@echo "\ntest 4: "
	./PmergeMe -1 2

.PHONY: all re clean fclean