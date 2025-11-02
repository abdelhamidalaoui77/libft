# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alamrani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 11:09:40 by alamrani          #+#    #+#              #
#    Updated: 2025/10/28 19:11:18 by alamrani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_calloc.c ft_memset.c ft_bzero.c \
	  ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
      ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
	  ft_strdup.c ft_strncmp.c ft_atoi.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)
HEADER = libft.h
ARCHIVE = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $(OBJ)
	@echo "libft.a created successfully!"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	rm -f $(NAME)
	@echo "libft.a removed."

re: fclean all
	@echo "Rebuilt everything."

.PHONY: all clean fclean re
