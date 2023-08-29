# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 06:51:34 by bkaztaou          #+#    #+#              #
#    Updated: 2023/08/29 11:49:04 by bkaztaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ./src
UTILS_DIR = ./utils
RULES_DIR = ./rules
ALGO_DIR = ./algorithm

SRC = $(wildcard $(SRC_DIR)/*.c)
UTILS = $(wildcard $(UTILS_DIR)/*.c)
RULES = $(wildcard $(RULES_DIR)/*.c)
ALGO = $(wildcard $(ALGO_DIR)/*.c)

FILES = $(SRC) $(UTILS) $(RULES) $(ALGO)

OBJ = $(FILES:.c=.o)

RM = rm -rf

OK_ICON = \033[0;32m✔\033[0m
INFO_ICON = \033[0;36mℹ\033[0m
ERROR_ICON = \033[0;31m✖\033[0m

all: $(NAME) Header
$(NAME): $(OBJ)
	@echo "$(INFO_ICON) \033[1;33mLinking object files..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(OK_ICON) \033[1;32mSuccessfully compiled $(NAME)"

%.o: %.c
	@echo "$(INFO_ICON) \033[1;33mCompiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@ >/dev/null
	@echo "$(OK_ICON) \033[1;32mCompiled $<"

clean:
	@$(RM) $(OBJ)
	@echo "$(INFO_ICON) Cleaned object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(INFO_ICON) \033[1;32mCleaned $(NAME)"

re: fclean all

Header:
	@echo ""
	@echo "######  #     #  #####  #     #          #####  #     #    #    ######"
	@echo "#     # #     # #     # #     #         #     # #  #  #   # #   #     #"
	@echo "#     # #     # #       #     #         #       #  #  #  #   #  #     #"
	@echo "######  #     #  #####  #######          #####  #  #  # #     # ######"
	@echo "#       #     #       # #     #               # #  #  # ####### #"
	@echo "#       #     # #     # #     #         #     # #  #  # #     # #"
	@echo "#        #####   #####  #     #          #####   ## ##  #     # #"
	@echo ""

.PHONY: all clean fclean re Header 

