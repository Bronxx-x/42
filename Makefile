LIBFT_DIR = ft_printf/
LIBFT_LIB = $(LIBFT_DIR)/libftprintf.a

SRCS = swap.c lstdelitem.c push.c reverse.c rotate.c sort_algo.c sort_util1.c main.c \
	sort_util_ab.c sort_util_ba.c rotate_type.c lst_util.c big_sort.c apply_algo.c
	
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

INCLUDE = -L $(LIBFT_DIR) -lftprintf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(LIBFT_LIB) $(NAME)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDE)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
