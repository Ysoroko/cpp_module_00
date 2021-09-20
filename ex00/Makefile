# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 11:13:57 by ysoroko           #+#    #+#              #
#    Updated: 2021/09/20 14:57:56 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------------- VARS ----------------------------------

NAME		=	megaphone

SRC			=	megaphone.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o megaphone

EXEC		=	megaphone

# ------------------------------------- RULES ---------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ----------------------------------

test1: all
	./$(EXEC) "shhhhh... I think the students are asleep..."

test2: all
	./$(EXEC) Damnit " ! " "Sorry students, I thought this thing was off."

test3: all
	./$(EXEC)

.PHONY:	all clean fclean re test1 test2 test3