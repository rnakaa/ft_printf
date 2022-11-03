SRCS	= ft_printf.c	\
	ft_printf.h			\
	ft_putchar.c		\
	ft_putnbrbase.c		\
	ft_putpointer.c		\
	ft_putstr.c			

OBJS	=	$(SRCS:.c=.o)

CC	= cc

CFLAGS			= -Wall -Wextra -Werror

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:	
		rm -f $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all

run:
		gcc -Wall *c */*c 
		./a.out

.PHONY:	all clean fclean re