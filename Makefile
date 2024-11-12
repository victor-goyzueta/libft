# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 15:39:31 by vgoyzuet          #+#    #+#              #
#    Updated: 2024/10/16 16:15:09 by vgoyzuet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libft.a

# Copiling command and options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# List of files sources and its files objects
SRCS	=	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strlen.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_strdup.c\
	ft_calloc.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\

OBJS = $(SRCS:.c=.o)

# Copila all
all: $(NAME)

# Create the library from objects
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "libft.a successfully created."

# Copila objects .c to files .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Copiling $<..."

# Delete files objects (.o)
clean:
	@rm -f $(OBJS)
	@echo "Objects files deleted."

# Delete files objects and library
fclean: clean
	@rm -f $(NAME)
	@echo "Clean completed, libft.a deleted."

# Clean and recopila all
re: fclean all

# Prevent make from interpreting these words as files
.PHONY: all clean fclean re
