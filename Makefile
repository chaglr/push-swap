NAME		:= push_swap
INCLUDE		:= include
LIBFT		:= libft
SRC_DIR		:= src/
OBJ_DIR		:= obj/
INC_DIR		:= include/
CC			:= cc
CFLAGS		:= -Wall -Werror -Wextra -O2 -g -I$(INC_DIR)
RM			:= rm -f

SRC :=	$(SRC_DIR)cleaner.c				$(SRC_DIR)digit_checker.c \
		$(SRC_DIR)errors.c				$(SRC_DIR)ft_atoi.c \
		$(SRC_DIR)main.c				$(SRC_DIR)many_args.c \
		$(SRC_DIR)pre_array_sorting.c	$(SRC_DIR)push.c \
		$(SRC_DIR)rev_rotate.c			$(SRC_DIR)rotate.c \
		$(SRC_DIR)sort_helpers.c		$(SRC_DIR)stacks.c \
		$(SRC_DIR)swap.c				$(SRC_DIR)three_args.c \
		$(SRC_DIR)two_args.c			$(SRC_DIR)four_five_args.c
OBJ := $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

ifdef DEBUG
	CFLAGS += -DDEBUG_MODE
endif

ifdef FSANITIZE
	CFLAGS += -fsanitize=address
endif

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $(OBJ)
	@echo "  \033[0;35m|\033[0m"
	@echo "  \033[0;35mV\033[0m"
	@echo "\033[0;33m\033[35m***************************************\033[0m\033[0m"
	@echo "\033[0;32m\033[35m*\033[0;32m           *** Push_swap compiled !  \033[35m*\033[0m\033[0m"
	@echo "\033[0;33m\033[35m***************************************\033[0m\033[0m"
	@echo "muhammet caglar nal "
	@echo " "

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "  \033[0;35m|\033[0m"
	@echo "  \033[0;35mV\033[0m"
	@echo "\033[0;33m\033[35m***************************************\033[0m\033[0m"
	@echo "\033[0;35m*\033[0;33m  \033[31m* Cleaned up object files!         \033[35m*\033[0m\033[0m"



fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;33m\033[35m***************************************\033[0m\033[0m"
	@echo "\033[0;33m\033[35m*\033[0;33m      ** Cleaned up executable!      \033[35m*\033[0m\033[0m"
	@echo "\033[0;33m\033[35m***************************************\033[0m\033[0m"


all: $(NAME)

re: fclean all

.PHONY: fsanitize
fsanitize:
	$(MAKE) clean
	$(MAKE) FSANITIZE=1 all

.PHONY: valgrind
valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: test
test: $(NAME)
	./$(NAME) [arguments for your program]

.PHONY: debug
debug: CFLAGS += -DDEBUG
debug: $(NAME)
	lldb ./$(NAME) -- 5 6 4 7 8 9
