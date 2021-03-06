NAME = libftprintf.a

SRC_PATH = ./sources

SRC_NAME = fct_count.c ft_printf.c print_opt.c fmt_init.c opt_read.c

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(SRC:.c=.o)

LIB = ./libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I./includes -I./libft/includes

all: $(LIB) $(NAME)

$(LIB):
	make -C ./libft

$(NAME): $(OBJ) $(LIB)
	cp $(LIB) $(NAME)
	ar rc $(NAME) $(OBJ)  

$(SRC_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	make clean -C ./libft
	rm -fv $(OBJ)

fclean: clean
	make fclean -C ./libft
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)

test: all
	$(CC) -o test $(NAME) main.c $(CPPFLAGS) 
	
