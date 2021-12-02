NAME	= Myphonebook

NAME_SRCS = main.cpp Contacts.cpp Myphonebook.cpp

CONTACT_HEADER = Contacts.hpp
PHBOOK_HEADER = Myphonebook.hpp

CC = g++
RM = rm -f
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(NAME_SRCS) $(CONTACT_HEADER) $(PHBOOK_HEADER)
	@$(CC) $(FLAGS) $(NAME_SRCS) -o $(NAME)
	@printf "Myphonebook was build ✅\n"

clean:
		@rm -rf $(NAME)
		@printf "ALL is in trash 🗑\n"

fclean: clean

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re bonus rebonus