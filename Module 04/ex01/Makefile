_name	= Brain

_name_SRCS = Animal.cpp main.cpp Cat.cpp Dog.cpp Brain.cpp

HEADER	= Animal.hpp Cat.hpp Dog.hpp Brain.hpp 

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

all: $(_name)

$(_name) : $(HEADER) $(_name_SRCS) Makefile
	@$(CC) $(FLAGS) $(_name_SRCS) -o $(_name)
	@printf "Brain was build ✅\n"

clean:
		# @rm -rf $(OBJ_DIR)
		@printf "ALL is in trash 🗑\n"

fclean: clean
		@$(RM) $(_name)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re bonus rebonus