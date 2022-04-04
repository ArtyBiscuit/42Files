SRCS 	= $(wildcard ./srcs/*.c)
CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME 	= bsq
OBJS 	= *.o

all		:	$(NAME)

$(NAME) : 	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS)	:
	$(CC) $(CFLAGS) -c $(SRCS)

debug	: fclean
	$(CC) -c $(SRCS)
	$(CC) -o $(NAME) $(OBJS)

clean	:
	rm -f $(OBJS)

fclean	: 	clean
	rm -rf $(NAME)

re		:	fclean all
