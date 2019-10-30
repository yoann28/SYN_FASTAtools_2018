##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

NAME	= FASTAtools

CC 	= gcc

CFLAGS	= -Wall -I./include

SCR	=	src/main.c				\
		src/usage.c				\
		src/check_opt.c				\
		src/reverse/check_file.c		\
		src/reverse/reverse.c			\
		src/dna/dna.c				\
		src/coding/coding_sequence.c		\
		src/alignement/alignement.c		\
		src/rna/rna.c				\
		lib/my_strlen.c				\
		lib/my_write.c				\
		lib/capit.c				\
		lib/my_read.c				\
		lib/my_strchr.c				\
		lib/my_strcmp.c				\
		lib/my_strdup.c				\
		lib/my_putstr.c				\
		lib/my_putchar.c			\
		lib/my_getnbr.c				\
		src/dna/print.c				\
		lib/my_strncmp.c			\
		lib/my_strcapitalize.c			\
		lib/my_str_to_wordtab.c			\
		lib/my_strcat_dup.c

OBJ	= $(SCR:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
