NAME	= megaphone

NAME_SRCS = megaphone.cpp

CC = g++
RM = rm -f
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	@$(CC) $(FLAGS) $(NAME_SRCS) -o $(NAME)
	@printf "megaphone was build ✅\n"

clean:
		@rm -rf $(NAME)
		@printf "ALL is in trash 🗑\n"

fclean: clean

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re bonus rebonus