NAME	= Fixed

NAME_SRCS = main.cpp Fixed.cpp

HEADER	= Fixed.hpp

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

all: $(NAME)

$(NAME) : $(HEADER) $(NAME_SRCS) Makefile
	@$(CC) $(FLAGS) $(NAME_SRCS) -o $(NAME)
	@printf "Fixed was build ✅\n"

clean:
		# @rm -rf $(OBJ_DIR)
		@printf "ALL is in trash 🗑\n"

fclean: clean
		@$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re bonus rebonus