#include <stdlib.h>


void *ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char newc;
	unsigned char *newb;

	i = 0;
	newb = (unsigned char *)b;
	newc = (unsigned char)c;
	while (i < len)
	{
		newb[i] = newc;
		i++;
	}
	return (b);
}


