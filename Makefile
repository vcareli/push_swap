# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Definitions
NAME = push_swap
SRC_DIR = src/
INCLUDE = include
LIBFT = libft
CC = gcc
FLAGS = -Wall -Werror -Wextra -I
RM = rm -f

#Sources
SRC_FILES = main pilha

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))


all: $(LIBFT).a
	@$(CC) $(FLAGS)$(INCLUDE) $(SRC) $(LIBFT)/libft.a -o $(NAME)
	@echo "$(BLUE)Libft compilé!$(DEF_COLOR)"

$(LIBFT).a:
	@make -C $(LIBFT)
	@echo "$(BLUE)Libft compilé!$(DEF_COLOR)"

fclean:
	make fclean -C libft
	@echo "$(RED)Libft fichiers exécutables nettoyés!$(DEF_COLOR)"
	@$(RM) $(NAME)
	@echo "$(RED)Push_Swap exécutable nettoyés!$(DEF_COLOR)"	

clean:
	make clean -C $(LIBFT)
	@echo "$(RED)Libft fichiers objets nettoyés!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Tout nettoyé et reconstruit pour FdF!$(DEF_COLOR)"

norm:
	@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm