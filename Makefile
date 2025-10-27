# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alamrani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/26 11:23:44 by alamrani          #+#    #+#              #
#    Updated: 2025/10/27 17:32:55 by alamrani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper ft_tolower.c ft_calloc.c ft_memset.c ft_bzero.c \
	  ft_memcpy.c ft_memmove.c ft_memchr.c ft_strlen.c ft_strlcpy.c \
      ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c\
	  ft_strdup.c \
      ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
      ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

HEADER = libft.h

all: $(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "libf.a created successfully!"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -r $(OBJ)
	@echo "Object files removed"
fclean: clean
	rm -f $(NAME)
	@echo "libft.a removed."

re: fclean all
	@echo "Rebuilt everything."

.PHONY: all clean fclean re
