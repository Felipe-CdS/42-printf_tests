CC			=	gcc
NAME		=	a.out
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address
LIBS		= 	libtests.a libftprintf.a
TESTS_OBJ	=	test_all.o test_printf.o

#########################################################################
## Standard patterns

all: $(NAME)

clean:
	rm -f __.* $(TESTS_OBJ)

fclean:
	rm -f *.o $(NAME) $(LIBS)

.PHONY:
	all clean fclean re libtests.a valgrind

libtests.a: $(TESTS_OBJ)
	@echo ">Creating Tests lib..."
	ar -x libftprintf.a
	ar rcs libtests.a $(TESTS_OBJ)
	rm -f __.* *.o

#########################################################################
## Compile main function
## Special rules to compile on linux where bsd libs doesn't exist

valgrind:
	$(CC) main.c $(LIBS) -o $(NAME) $(CFLAGS) -g $(LINUX_FLAG)

$(NAME): $(LIBS)
ifeq ($(LF), 0)
	$(CC) main.c $(LIBS) -o $(NAME) $(CFLAGS)
else
	$(CC) main.c $(LIBS) -o $(NAME) $(CFLAGS) $(LINUX_FLAG)
endif

%.o : %.c
ifeq ($(LF), 0)
	$(CC) -c $< -o $@ $(CFLAGS)
else
	$(CC) -c $< -o $@ $(CFLAGS) $(LINUX_FLAG)
endif
