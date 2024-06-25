# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqiu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 16:15:23 by zqiu              #+#    #+#              #
#    Updated: 2024/06/25 14:26:04 by zqiu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# Source files
SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c \
       ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
       ft_memcpy.c ft_strchr.c ft_strlcpy.c \
       ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
       ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c \
       ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
       ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

# Object files
OBJS = $(SRCS:.c=.o)
BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS		= $(BONUS:.c=.o)

# Name of the library
NAME = libft.a

# Makefile targets
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
