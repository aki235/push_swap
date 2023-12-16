CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= push_swap

SRCS	= main.c \
		ft_atoi.c \
		dlst.c \
		dlst_swap.c dlst_push.c dlst_rotate.c dlst_rotate_rev.c\
		errors.c
OBJS	= $(SRCS:.c=.o)

all:		$(NAME) clean#あとで消す

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all