NAME	= ex01

NAME_SRCS = main.cpp ZombieHorde.cpp Zombie.cpp

HEADER	= Zombie.hpp

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

all: $(NAME)

$(NAME) : $(HEADER) $(NAME_SRCS) Makefile
	@$(CC) $(FLAGS) $(NAME_SRCS) -o $(NAME)
	@printf "ex01 was build ✅\n"

clean:
		# @rm -rf $(OBJ_DIR)
		@printf "ALL is in trash 🗑\n"

fclean: clean
		@$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re bonus rebonus