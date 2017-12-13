#include "libft.h"
#include "stdlib.h"

void   *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *newdst;
	unsigned char *newsrc;
	size_t i;

	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	if (src < dst)
	{
		i = n;
		while (i > 0)
		{
			newdst[i-1] = newsrc[i-1];
			i--;
		}
	}

	if (src > dst)
	{
		i = 0;
		while (i < n)
		{
			newdst[i] = newsrc[i];
			i++;
		}
	}
	return (dst);
}
