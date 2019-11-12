#!/bin/bash
echo Compiling libft ...
make -C libft/ fclean >/dev/null && make -C libft/ >/dev/null
echo Compiling executable ...
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c >/dev/null
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c >/dev/null
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft >/dev/null
echo Done!
