# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nduijf <nduijf@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/04 19:33:32 by nduijf        #+#    #+#                  #
#    Updated: 2022/03/04 19:33:33 by nduijf        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			zombie
SRCS = 			main.cpp	\
				Zombie.cpp	\
				newZombie.cpp	\
				randomChump.cpp	\

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