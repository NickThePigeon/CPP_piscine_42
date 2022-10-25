# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nicky <nicky@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/04 23:47:50 by nicky         #+#    #+#                  #
#    Updated: 2022/06/05 14:09:28 by nicky         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			Abstract
SRCS = 			main.cpp	\
				Cat.cpp	\
				Dog.cpp	\
				AAnimal.cpp	\
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
