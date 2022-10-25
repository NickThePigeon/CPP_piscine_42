# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nicky <nicky@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/04 23:49:04 by nicky         #+#    #+#                  #
#    Updated: 2022/06/16 11:53:45 by nicky         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			Bureaucrat
SRCS = 			main.cpp	\
				Bureaucrat.cpp

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
