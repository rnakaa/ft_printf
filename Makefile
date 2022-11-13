SRCS	= ft_printf.c	\
	ft_putchar.c		\
	ft_putnbrbase.c		\
	ft_putpointer.c		\
	ft_putstr.c			\
	ft_strlen.c			\
	ft_toupper.c		\
	ft_putulong.c

OBJS	=	$(SRCS:.c=.o)

CC	= cc

CFLAGS			= -Wall -Wextra -Werror

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:	
		rm -f $(OBJS)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re