_name	= ClapTrap

_name_SRCS = ClapTrap.cpp main.cpp

HEADER	= ClapTrap.hpp

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

all: $(_name)

$(_name) : $(HEADER) $(_name_SRCS) Makefile
	@$(CC) $(FLAGS) $(_name_SRCS) -o $(_name)
	@printf "ClapTrap was build ✅\n"

clean:
		# @rm -rf $(OBJ_DIR)
		@printf "ALL is in trash 🗑\n"

fclean: clean
		@$(RM) $(_name)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re bonus rebonus