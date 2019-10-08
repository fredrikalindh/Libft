# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 14:20:33 by frlindh           #+#    #+#              #
#    Updated: 2019/10/08 14:50:20 by frlindh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME - COMPILATOR - FLAGS ************************************************** #
NAME			=	libft.a
GCC				=	gcc
FLAGS			=	-Wall -Wextra -Werror

# INCLUDES ******************************************************************* #
INCLUDES_DIR	=	includes

# SRCS *********************************************************************** #
SRCS_DIR		=	srcs/
SRCS			=	$(addprefix $(SRCS_DIR), *.c)

# OBJS *********************************************************************** #
OBJS			=	$(addprefix $(SRCS_DIR), *.o)

# RULES ********************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS): $(SRCS)
	$(GCC) $(FLAGS) -I $(INCLUDES_DIR) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
