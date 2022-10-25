# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nicky <nicky@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/04 23:49:04 by nicky         #+#    #+#                  #
#    Updated: 2022/08/30 22:54:52 by nicky         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =			abstractForm
SRCS = 			main.cpp	\
				Bureaucrat.cpp	\
				Form.cpp	\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp	\
				PresidentialPardonForm.cpp \

OBJS			= $(SRCS:.cpp=.o)
CFLAGS			= -Wall -Wextra -Werror -std=c++98
CC				= c++
SHRUBBERY		= $(wildcard *_shrubbery)

all:	$(NAME)

$(NAME): $(OBJS)
	${CC} ${CFLAGS} -o ${NAME} $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)
	rm -f $(SHRUBBERY)

re:	fclean $(NAME)

.PHONY: all clean fclean re
