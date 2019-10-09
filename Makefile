# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 14:20:33 by frlindh           #+#    #+#              #
#    Updated: 2019/10/09 15:36:28 by frlindh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME - COMPILATOR - FLAGS ************************************************** #
NAME			=	libft.a
GCC				=	gcc
FLAGS			=	-Wall -Wextra -Werror

# INCLUDES ******************************************************************* #
INCLUDES_DIR	=	./includes

# SRCS *********************************************************************** #
SRCS_LIST		=	ft_atoi.c	\
				ft_bzero.c	\
				ft_calloc.c	\
				ft_fill_split.c	\
				ft_incharset.c	\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_itoa.c	\
				ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c	\
				ft_lstdelone.c	\
				ft_lstiter.c	\
				ft_lstlast.c	\
				ft_lstmap.c	\
				ft_lstnew.c	\
				ft_lstsize.c	\
				ft_memccpy.c	\
				ft_memchr.c	\
				ft_memcmp.c	\
				ft_memcpy.c	\
				ft_memmove.c	\
				ft_memset.c	\
				ft_putchar_fd.c	\
				ft_putendl.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_putstr_fd.c	\
				ft_split.c	\
				ft_strchr.c	\
				ft_strdup.c	\
				ft_strjoin.c	\
				ft_strlcat.c	\
				ft_strlcpy.c	\
				ft_strlen.c	\
				ft_strmapi.c	\
				ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_strtrim.c	\
				ft_substr.c	\
				ft_tolower.c	\
				ft_toupper.c
SRCS_DIR		=	srcs/
SRCS			=	$(addprefix $(SRCS_DIR), $(SRCS_LIST))

# OBJS *********************************************************************** #
OBJS_DIR		=	objs/
OBJS_LIST		=	$(patsubst %.c, %.o, $(SRCS_LIST))
OBJS			=	$(addprefix $(OBJS_DIR), $(OBJS_LIST))

# RULES ********************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	$(GCC) $(FLAGS) -I $(INCLUDES_DIR) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
