# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nicky <nicky@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/04 23:47:50 by nicky         #+#    #+#                  #
#    Updated: 2022/08/25 14:46:58 by nicky         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			AMateria
SRCS = 			main.cpp	\
				AMateria.cpp \
				Character.cpp \
				Cure.cpp	\
				Ice.cpp	\
				MateriaSource.cpp

OBJS			= $(SRCS:.cpp=.o)
CFLAGS			= -Wall -Wextra -Werror -std=c++98
CC				= g++

all:	$(NAME)

$(NAME): $(OBJS)
	${CC} ${CFLAGS} -o ${NAME} $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
