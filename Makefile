NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f 
AR = ar rcs
RL = ranlib
SRC	=	ft_digit.c			ft_hexa.c			ft_itoa.c		\
		ft_long_length.c	ft_pointer.c		ft_printf.c 	\
		ft_putchar.c		ft_strlen.c			ft_putstring.c		ft_tolower.c
		
OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@ echo Generating Standard $(NAME)..
	@ $(AR) $(NAME) $(OBJ)
	@ $(RL) $(NAME)

.c.o: 
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@ echo Removing Object Files
	@ $(RM) $(OBJ)

fclean: clean
	@ echo Removing $(NAME)
	@ $(RM) $(NAME)

re: fclean all