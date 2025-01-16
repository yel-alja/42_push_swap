NAME = push_swap


SRCS = arg_lst.c  ft_atoi.c  ft_split.c  is_valid.c  main.c \
		push_swap_utils.c sort_list.c sa.c sb.c ss.c \
		ra.c rb.c rr.c rrb.c rra.c rrr.c pa.c pb.c turk_algo.c \
		target.c
OBJS:= $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
