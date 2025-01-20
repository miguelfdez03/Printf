# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 13:27:24 by miguel-f          #+#    #+#              #
#    Updated: 2025/01/17 21:21:14 by miguel-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
##                                    COLOURS                                 ##
################################################################################

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_YELLOW=\033[33m
COLOUR_MAGENTA=\033[35m
COLOUR_TURQUOISE=\033[36m	
COLOUR_END=\033[0m

################################################################################
##                                     RULES                                  ##
################################################################################

NAME = libftprintf.a
EXEC = main
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Paths
LIBFT_DIR = libtf
LIBFT = $(LIBFT_DIR)/libft.a

# Sources
SRCS = ft_printf.c main.c
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME) $(EXEC) head

head:
	@echo "$(COLOUR_MAGENTA)"
	@echo "   __ _                  _       _    __ "
	@echo "  / _| |                (_)     | |  / _|"
	@echo " | |_| |_     _ __  _ __ _ _ __ | |_| |_ "
	@echo " |  _| __|   | '_ \| '__| | '_ \| __|  _|"
	@echo " | | | |_    | |_) | |  | | | | | |_| |  "
	@echo " |_|  \__|   | .__/|_|  |_|_| |_|\__|_|  "
	@echo "       ______| |                         "
	@echo "      |______|_|      42MLG: by miguel-f \n"
	@echo "Proyect: \033[36m ft_printf $(COLOUR_MAGENTA)"
	@echo "Commands:\033[36m all clean fclean re $(COLOUR_END)\n"
	@printf "$(COLOUR_BLUE) 🛠   Compiler: $(CC) $(COLOUR_END)\n\n"

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	@printf "\n ⏱  Creating $(NAME)"
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) ft_printf.o
	@echo "$(COLOUR_GREEN)\r  ✓   Created  $(NAME) $(COLOUR_END)\n"

$(EXEC): $(OBJS) $(LIBFT)
	@printf "\n ⏱  Creating $(EXEC)"
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS) $(LIBFT)
	@echo "$(COLOUR_GREEN)\r  ✓   Created  $(EXEC) $(COLOUR_END)\n"

%.o: %.c
	@printf " ⏱  Compiling $@"
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@
	@echo "$(COLOUR_GREEN)\r  ✓   Compiled  $@ $(COLOUR_END)"

clean:
	@printf "\n$(COLOUR_YELLOW) 🗑   Removing objects$(COLOUR_END)"
	$(RM) $(OBJS)
	@make -C $(LIBFT_DIR) clean
	@echo "$(COLOUR_GREEN)\r  ✓  $(COLOUR_RED)Removed  objects $(COLOUR_END)"

fclean: clean
	@printf "$(COLOUR_YELLOW) 🗑   Removing $(NAME) and $(EXEC)$(COLOUR_END)"
	$(RM) $(NAME) $(EXEC)
	@make -C $(LIBFT_DIR) fclean
	@echo "$(COLOUR_GREEN)\r  ✓  $(COLOUR_RED)Removed  $(NAME) and $(EXEC) $(COLOUR_END)\n"

re: fclean all

.PHONY: all clean fclean re