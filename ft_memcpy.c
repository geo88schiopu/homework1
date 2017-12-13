#include "libft.h"

void   *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *newdest;
	unsigned char *newsrc;

	i = 0;
	newdest = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
	while (i < n)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (dest);
}
