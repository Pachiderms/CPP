# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 20:33:59 by marvin            #+#    #+#              #
#    Updated: 2025/02/10 20:33:59 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = refptr

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJS = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${FLAGS} ${OBJS}	-o ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all re clean fclean