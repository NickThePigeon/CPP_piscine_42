# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nicky <nicky@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/07 12:01:58 by nicky         #+#    #+#                  #
#    Updated: 2022/03/16 13:59:37 by nduijf        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			loadReplace
SRCS = 			main.cpp	\
				ReplAndWrite.cpp	\

OBJS			= $(SRCS:.cpp=.o)
CFLAGS			= -g -Wall -Wextra -Werror -std=c++98
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