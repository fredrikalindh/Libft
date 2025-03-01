# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 14:20:33 by frlindh           #+#    #+#              #
#    Updated: 2019/10/16 17:20:04 by frlindh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME - COMPILATOR - FLAGS ************************************************** #
NAME			=	libft.a
GCC				=	gcc
FLAGS			=	-Wall -Wextra -Werror

# SRCS *********************************************************************** #
SRCS			=	ft_atoi.c	\
				ft_bzero.c	\
				ft_calloc.c	\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_itoa.c	\
				ft_memccpy.c	\
				ft_memchr.c	\
				ft_memcmp.c	\
				ft_memcpy.c	\
				ft_memmove.c	\
				ft_memset.c	\
				ft_putchar_fd.c	\
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
SRCS_BONUS 		=	ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c	\
				ft_lstdelone.c	\
				ft_lstiter.c	\
				ft_lstlast.c	\
				ft_lstmap.c		\
				ft_lstnew.c		\
				ft_lstsize.c	\
				ft_putstr.c		\
				ft_putchar.c	\
				ft_strcpy.c		\
				ft_putnbr.c		\
				ft_putendl.c


# OBJS *********************************************************************** #
OBJS		=	$(patsubst %.c, %.o, $(SRCS))
OBJS_BONUS	=	$(patsubst %.c, %.o, $(SRCS_BONUS))

# RULES ********************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
