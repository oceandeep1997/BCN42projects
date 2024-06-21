# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqiu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 16:15:23 by zqiu              #+#    #+#              #
#    Updated: 2024/06/21 18:58:40 by zqiu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c \
       ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
       ft_memcpy.c ft_strchr.c ft_strlcpy.c \
       ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
       ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c \
       ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c

# Object files
OBJS = $(SRCS:.c=.o)
BONUS			=	ft_lstadd_back.c ft_lstadd_front.c
BONUS_OBJS		= $(BONUS:.c=.o)

# Name of the library
NAME = libft.a

# Makefile targets
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

