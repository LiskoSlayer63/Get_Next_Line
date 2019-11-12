# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahola <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 15:29:18 by mahola            #+#    #+#              #
#    Updated: 2019/11/12 17:21:51 by mahola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = srcs
HDR_DIR = includes
SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		  ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		  ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c \
		  ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
		  ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
		  ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c \
		  ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c \
		  ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c \
		  ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_isspace.c \
		  ft_islower.c ft_isupper.c ft_strndup.c ft_pow.c ft_powl.c
OBJECTS = $(SOURCES:.c=.o)

BLUE = \033[34m
GREEN = \033[32m
YELLOW = \033[33m
MAGENTA = \033[35m
RED = \033[31m
DEFAULT = \033[0m
BOLD = \033[1m

FLAGS = -Wall -Wextra -Werror -c -I $(HDR_DIR)

all: $(NAME)
	@echo "$(GREEN)$(BOLD)All done!$(DEFAULT)"

$(NAME): $(OBJECTS)
	@echo "$(YELLOW)Building $(MAGENTA)$(BOLD)$(NAME) $(YELLOW)$(BOLD)...$(DEFAULT)"
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

%.o: $(SRC_DIR)/%.c
	@echo "$(YELLOW)Compiling $(BLUE)$(BOLD)$(firstword $(subst ., ,$@)) $(YELLOW)...$(DEFAULT)"
	@gcc $(FLAGS) $< -o $@

clean:
	@/bin/rm -f $(OBJECTS)
	@echo "$(RED)$(BOLD)Binaries cleaned!$(DEFAULT)"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "$(RED)$(BOLD)All cleaned!$(DEFAULT)"

re: fclean all
