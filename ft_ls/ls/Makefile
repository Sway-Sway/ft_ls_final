NAME = ft_ls

LIBFT_PATH = ./libft/

SRC_PATH = ./srcs/

SRCS = file_info.c \
	   fix_lists.c \
	   error_handling.c \
	   listdiRe.c \
	   flags.c \
	   longformat.c \
	   sorting.c \

FLAGS = -Wall -Werror -Wextra

INC = -I ./includes/ft_ls.h -I $(LIBFT_PATH)libft.h

SRC = $(addprefix $(SRC_PATH), $(SRCS))

SRCO = $(patsubst %.c, %.o, $(SRC))

all: $(NAME)

$(NAME) : $(SRCO)
	@make -C $(LIBFT_PATH)
	@gcc $(FLAGS) -o $(NAME) $(SRC) $(LIBFT_PATH)libft.a
	@echo "\033[32mBinary \033[1;32m$(NAME)\033[1;0m\033[32m Stubbed.\033[0m"

$(SRC_PATH)%.o: $(SRC_PATH)%.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_PATH)/ clean
	@/bin/rm -rf $(SRCO)
	@echo "\033[31mObjects Files \033[1;31m$(OBJS_LIST)\033[1;0m\033[31m Stubbed-out.\033[0m"

fclean:
	@make -C $(LIBFT_PATH)/ fclean
	@/bin/rm -rf $(NAME)
	@echo "\033[31m Executable-stub \033[1;31m$(NAME)\033[1;0m\033[31m Removed.\033[0m"

re: fclean all

.PHONY: all fclean clean re
