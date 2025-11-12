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

test: all
	@echo "test 1: "
	./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	@echo "\ntest 2: "
	./RPN "7 7 *   7  -"
	@echo "\ntest 3: "
	./RPN "1 2 * 2 / 2 * 2 4 - +"
	@echo "\ntest 4: "
	./RPN "1 -2 *"
	@echo "\ntest 5: "
	./RPN "1 5 * 8 7 * 6 / + 4 - 3 7 * +"
	@echo "\nTesting Bad Inputs:\n\ntest 6 (invalid character): "
	 ./RPN "(1 + 1)"
	@echo "\ntest 7 (too many numbers following): "
	./RPN "1 2 * 2 / 2 * 2 4 5 6 - +"
	@echo "\ntest 8 (invalid sign position): "
	./RPN "1 2- * 2 / 2 * 2 4 5 6 - +"
	@echo "\ntest 9 (division by 0): "
	./RPN "1 2- * 0 / 2 * 2 4 5 6 - +"

.PHONY: all re clean fclean