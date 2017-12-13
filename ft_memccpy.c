#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	newc;
	unsigned char	*newdst;
	unsigned char	*newsrc;
	size_t	i;
	
	i = 0;
	newc = (unsigned char)c;
	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	while (i < n)
	{
		newdst[i] = newsrc[i];
		if (newsrc[i] == newc)
			return (newdst+i+1);
		i++;
	}
	return (NULL);
}
