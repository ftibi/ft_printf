SRC_PATH = ./sources

SRC_NAME = fct_count.c ft_printf.c print_opt.c fmt_init.c opt_read.c

SRC = $(addprefix $(SRC_PATH)/,$SRC_NAME)

OBJ = $(SRC:.c=.o)

LIB = libft.a

$(LIB):
	make -C ./libft

