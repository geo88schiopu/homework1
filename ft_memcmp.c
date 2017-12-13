#include "libft.h"

int   ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *newdest;
	unsigned char *newsrc;

	i = 0;
	newdest = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
	while (i < n)
	{
		if (newdest[i] != newsrc[i])
			return (newdest[i] - newsrc[i]); 
		i++;
	}
	return (0);
}
