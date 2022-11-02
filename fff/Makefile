NAME = push_swap
SRC =  push_swap.c  \
		sa.c                    sort.c              pars.c    sort2.c\
		sb.c                    sort_100.c			sort3.c   error.c

CFLAGS = -Wall -Wextra -Werror -g3 

CC = gcc
OBJ = $(SRC:.c=.o)
LIBS = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	make bonus -C libft/.
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)



ARG = 83 30220 11 12 -100 22 3
test:
	@./push_swap $(ARG)
	@./push_swap $(ARG) | wc -l
	@./push_swap $(ARG) | ./checker $(ARG)


clean:
	@rm -f *.o
	@make clean -C libft/.

	


fclean: clean 
	@rm -f $(NAME) 
	@rm -f libft/libft.a
	@rm -f push_swap

re : fclean all