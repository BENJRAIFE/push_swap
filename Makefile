NAME = push_swap
BNS = checker

CC = cc
CFLAGS = -Werror -Wextra -Wall #-g3 -fsanitize=address

SRC = ./mandatory/push_swap.c \
	./mandatory/errors_check.c \
	./mandatory/push_to_stack.c \
	./mandatory/push.c \
	./mandatory/swap.c \
	./mandatory/ft_split.c \
	./mandatory/addnode_back.c \
	./mandatory/utiles.c \
	./mandatory/free.c \
	./mandatory/rotates.c \
	./mandatory/sort_3.c \
	./mandatory/sort_5.c \
	./mandatory/sort_100.c 
	
BNS_FILE = ./bonus/main.c \
	./bonus/addnode_back.c \
	./bonus/check_rules.c \
	./bonus/errors_check.c \
	./bonus/free.c \
	./bonus/ft_split.c \
	./bonus/push.c \
	./bonus/swap.c \
	./bonus/push_to_stack.c \
	./bonus/rotates.c \
	./bonus/utiles.c \
	./bonus/get_next_line.c \
	./bonus/get_next_line_utils.c

OBJ=$(SRC :.c:.o)

all:$(NAME)

bonus :$(BNS)

$(BNS):$(BNS_FILE)
	$(CC) $(CFLAGS) $(BNS_FILE)  $(OBJ) -o $@
	
$(NAME): $(SRC) $(OBJ)
	$(CC) $(CFLAGS) $(SRC)  $(OBJ) -o $@

clean :
	rm -rf  push_swap checker

fclean: clean
	rm -rf $(NAME) $(BNS)

re: fclean all
