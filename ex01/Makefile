# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 11:13:57 by ysoroko           #+#    #+#              #
#    Updated: 2021/09/17 11:03:52 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------------- VARS ----------------------------------

NAME		=	phonebook

SRC			=	phonebook.cpp \
				Contact.class.cpp \
				Phonebook.class.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o phonebook

EXEC		=	phonebook

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.PHONY:	all phonebook clean fclean re