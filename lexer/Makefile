
NAME = 21sh.lexer

SRC = main.c \
		load_source_code.c \
		print_source_code.c \
		finite_state_machine.c \
		get_new_event.c \
		freedom.c \
		action_procedures/action_utils.c \
		action_procedures/check_end_of_string.c \
		action_procedures/end_of_data.c \
		action_procedures/find_delimiter.c \
		action_procedures/find_start_of_data.c \
		action_procedures/find_start_of_token.c \
		action_procedures/parse_error.c \
		action_procedures/parse_number.c \
		action_procedures/parse_string.c
		

SRCDIR = ./src
OBJDIR = ./obj
INCDIR = ./includes
INCDIR_LFT = ../libft/includes
INCDIR_ACTIONS = ./src/action_procedures/includes

FTDIR = ../libft
FTLIB = $(addprefix $(FTDIR)/, libft.a)
FTINC = -I $(FTDIR)
FTLNK = -L $(FTDIR) -l ft

OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
CC = gcc
FLAGS =	-Wall -Werror -Wextra -g

all: obj $(FTLIB) $(NAME)

obj:
	mkdir -p $(OBJDIR)/action_procedures

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(FLAGS) $(FTINC) -I $(INCDIR) -I $(INCDIR_ACTIONS) -I $(INCDIR_LFT) -o $@ -c $<

$(FTLIB):
	make -C $(FTDIR)

$(NAME): $(OBJ) $(FTLIB)
	$(CC) $(FLAGS) $(OBJ) $(FTLNK) -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	make -C $(FTDIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FTDIR) fclean

re: fclean all

.PHONY: clean, fclean, re
