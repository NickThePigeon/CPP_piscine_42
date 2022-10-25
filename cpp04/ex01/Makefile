# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nicky <nicky@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/04 23:47:50 by nicky         #+#    #+#                  #
#    Updated: 2022/06/05 11:58:26 by nicky         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			Polymorph
SRCS = 			main.cpp	\
				Cat.cpp	\
				Dog.cpp	\
				Animal.cpp	\
				WrongAnimal.cpp \
				WrongCat.cpp \
				Brain.cpp

OBJS			= $(SRCS:.cpp=.o)
CFLAGS			= -Wall -Wextra -Werror -std=c++98
CC				= c++

all:	$(NAME)

$(NAME): $(OBJS)
	${CC} ${CFLAGS} -o ${NAME} $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
