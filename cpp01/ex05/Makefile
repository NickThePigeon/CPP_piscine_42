# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nduijf <nduijf@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/08 18:04:42 by nduijf        #+#    #+#                  #
#    Updated: 2022/03/16 15:13:42 by nduijf        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			KarenComp
SRCS = 			main.cpp	\
				Karen.cpp	\

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
