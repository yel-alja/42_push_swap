NAME = push_swap

BONUS_NAME = checker

BONUS_SRCS = bonus/checker_utils.c bonus/main_bonus.c \
			 bonus/parsing.c bonus/moves/sa.c bonus/moves/sb.c \
			 bonus/moves/ss.c bonus/moves/ra.c bonus/moves/rb.c \
			 bonus/moves/rr.c bonus/moves/rrb.c bonus/moves/rra.c \
			 bonus/moves/rrr.c bonus/moves/pa.c bonus/moves/pb.c \
			 bonus/free_f.c bonus/ft_atoi.c bonus/ft_split.c \
			 bonus/is_valid.c  bonus/checker.c


SRCS = srcs/arg_lst.c  srcs/ft_atoi.c  srcs/ft_split.c  srcs/is_valid.c  srcs/main.c \
		srcs/push_swap_utils.c srcs/sort_list.c srcs/sa.c srcs/sb.c srcs/ss.c \
		srcs/ra.c srcs/rb.c srcs/rr.c srcs/rrb.c srcs/rra.c srcs/rrr.c srcs/pa.c srcs/pb.c \
		srcs/target.c srcs/count_moves.c srcs/turk_algo.c
OBJS:= $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all:$(NAME)

bonus:$(BONUS_NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
BONUS_OBJS:= $(BONUS_SRCS:.c=.o)

$(BONUS_NAME):$(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_SRCS) -o $(BONUS_NAME)

clean :
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f $(BONUS_NAME)

re: fclean all

.PHONY : all clean fclean re bonus
