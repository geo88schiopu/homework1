CFLAGS = -Wall -Wextra -Werror

all: so ar

so:
	gcc -c -fPIC $(CFLAGS) *.c
	gcc -shared -Wl,-soname,libft.so.1 -o libft.so *.o

ar:
	ar rc libft.a *.o
	ranlib libft.a

clean:
	/bin/rm -f *.o

re:
	fclean all
