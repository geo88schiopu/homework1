#include <stdlib.h>


void *ft_memchr(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char newc;
	unsigned char *newb;

	i = 0;
	newb = (unsigned char *)b;
	newc = (unsigned char)c;
	while (i < len)
	{
		if (newb[i] == newc)
			return (void *)(newb+i);
		i++;
	}
	return (NULL);
}


