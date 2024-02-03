NAME = corekit.a
CC = cc
CFLAGS = -Wall -Wextra -Werror $(CEXTRAFLAGS)
COMPILE = $(CC) $(CFLAGS)
ARCHIVE = ar rc $(NAME)
RM = rm -f

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
	@echo "$(BLUE)[LIBFTX]:\t$< COMPILED!"

$(NAME): $(OBJ)
	@$(ARCHIVE) $(OBJ)
	@echo "$(GREEN)[LIBFTX]:\tLIBRARY CREATED$(R)"

clean:
	@$(RM) $(OBJ)
	@echo "$(RED)[LIBFTX]:\tOBJECTS DELETED$(R)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)[LIBFTX]:\tLIBRARY DELETED$(R)"

re: fclean all

# COLORS
GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
R=\033[0m

.PHONY: all clean fclean re