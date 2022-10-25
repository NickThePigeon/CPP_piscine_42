# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nduijf <nduijf@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/06 14:22:48 by nduijf        #+#    #+#                  #
#    Updated: 2022/03/06 14:22:49 by nduijf        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			zombieHorde
SRCS = 			main.cpp	\
				Zombie.cpp	\
				zombieHorde.cpp	\

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