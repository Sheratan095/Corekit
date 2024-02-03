NAME = corekit.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)
ARCHIVE = ar rc $(NAME)
REMOVE = rm -f

GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
RESET=\033[0m

SRC = ./src/char/ft_tolower.c \
	./src/char/ft_toupper.c \
	./src/conversions/ft_atoi.c \
	./src/conversions/ft_itoa.c \
	./src/list/ft_lstadd_back.c \
	./src/list/ft_lstadd_front.c \
	./src/list/ft_lstclear.c \
	./src/list/ft_lstdelone.c \
	./src/list/ft_lstiter.c \
	./src/list/ft_lstlast.c \
	./src/list/ft_lstmap.c \
	./src/list/ft_lstnew.c \
	./src/list/ft_lstsize.c \
	./src/memory/ft_bzero.c \
	./src/memory/ft_calloc.c \
	./src/memory/ft_free_matrix.c \
	./src/memory/ft_memchr.c \
	./src/memory/ft_memcmp.c \
	./src/memory/ft_memcpy.c \
	./src/memory/ft_memmove.c \
	./src/memory/ft_memset.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

%.o: %.c
	@$(COMPILE) -c $< -Iincludes -o $@
#	@echo "$(BLUE)[COREKIT]:\t$< COMPILED! $(RESET)"

$(NAME): $(OBJ)
	@$(ARCHIVE) $(OBJ)
	@echo "$(GREEN)[COREKIT]: \t LIBRARY CREATED$(RESET)"

clean:
	@$(REMOVE) $(OBJ)
	@echo "$(RED)[COREKIT]: \t OBJECTS DELETED$(RESET)"

fclean: clean
	@$(REMOVE) $(NAME)
	@echo "$(RED)[COREKIT]: \t LIBRARY DELETED$(RESET)"

re: fclean all

.PHONY: all clean fclean re