# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/15 12:48:18 by avan-dam       #+#    #+#                 #
#    Updated: 2019/11/26 10:40:56 by avan-dam      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_strncmp.c ft_atoi.c ft_toupper.c ft_tolower.c \
ft_strdup.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_calloc.c \
ft_strlcat.c ft_strjoin.c ft_substr.c ft_split.c ft_strtrim.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c \
ft_strmapi.c

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

LIB = ft_strlen.o ft_strncmp.o ft_atoi.o ft_isprint.o ft_toupper.o \
ft_tolower.o ft_strdup.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o \
ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlcpy.o ft_strchr.o ft_strrchr.o \
ft_strnstr.o  ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
ft_isprint.o ft_calloc.o ft_strlcat.o ft_strjoin.o ft_substr.o ft_strtrim.o \
ft_split.o ft_putchar_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putnbr_fd.o \
ft_itoa.o ft_strmapi.o

BLIB = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o \
ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(LIB)
	ar rc $(NAME) $(LIB)
	ranlib $(NAME)

bonus: $(NAME) $(BLIB)
	ar rc $(NAME) $(BLIB)
	ranlib $(NAME)
	touch bonus

%.o: %.c
	gcc -o $@ -c $< -Wall -Wextra -Werror

clean:
	/bin/rm -f $(LIB) $(BLIB)

fclean: clean
	/bin/rm -f $(NAME) bonus

re: fclean all
