#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t len1;
	size_t len2;
	size_t i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	while (i < len2 & (i + len1) < size)
	{
		s1[len1 + i] = s2[i];
		i++;
	}	
	if (i == size & i != len2)
		return (size);
	s1[len1 + i] = '\0';
	return (len1 + i);
}
